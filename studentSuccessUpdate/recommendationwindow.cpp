#include "recommendationwindow.h"

recommendationwindow::recommendationwindow(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant recommendationwindow::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex recommendationwindow::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex recommendationwindow::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int recommendationwindow::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int recommendationwindow::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant recommendationwindow::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
