#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "global/systeminformation.h"

#include "global/global.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    auto systemRoot = Global::SystemInformation::instance()->systemVolume();


    LOG << systemRoot.rootPath();
    LOG << "Device" << "FileSystem" << "displayName" << "BlockSize" << "TotalByte"<<"byteavailable"<<"subVolume";
    for( const auto &item : Global::SystemInformation::instance()->volumeList() ){
        LOG << item.device() << item.fileSystemType() << item.displayName() << item.blockSize() << item.bytesTotal() << item.bytesAvailable() << item.subvolume();
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

