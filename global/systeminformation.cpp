#include "systeminformation.h"

#include <mutex>


namespace Global {


SystemInformation* SystemInformation::mInstance{nullptr};
std::once_flag mOnceFlag;

SystemInformation *SystemInformation::instance()
{
    std::call_once(mOnceFlag,[=](){
        mInstance = new SystemInformation();
    });
    return mInstance;
}

const QStorageInfo SystemInformation::systemVolume() const
{
    return QStorageInfo::root();
}

QList<QStorageInfo> SystemInformation::volumeList() const
{
    return QStorageInfo::mountedVolumes();
}

SystemInformation::SystemInformation(QObject *parent)
    : QObject{parent}
{

}

} // namespace Global
