#include "volumemodel.h"

namespace Volume {

VolumeModel::VolumeModel(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant VolumeModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex VolumeModel::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex VolumeModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int VolumeModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int VolumeModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

bool VolumeModel::hasChildren(const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

bool VolumeModel::canFetchMore(const QModelIndex &parent) const
{
    // FIXME: Implement me!
    return false;
}

void VolumeModel::fetchMore(const QModelIndex &parent)
{
    // FIXME: Implement me!
}

QVariant VolumeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}

} // namespace Volume
