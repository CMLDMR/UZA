#ifndef GLOBAL_SYSTEMINFORMATION_H
#define GLOBAL_SYSTEMINFORMATION_H

#include <QObject>
#include <QStorageInfo>


namespace Global {

class SystemInformation : public QObject
{
    Q_OBJECT
public:
    static SystemInformation* instance() ;

    const QStorageInfo systemVolume() const;

    QList<QStorageInfo> volumeList() const;


private:
    explicit SystemInformation(QObject *parent = nullptr);

    static SystemInformation* mInstance;


signals:

};

} // namespace Global

#endif // GLOBAL_SYSTEMINFORMATION_H
