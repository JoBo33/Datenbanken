#ifndef CONNECTIONWIDGET_H
#define CONNECTIONWIDGET_H

#include <QWidget>

QT_FORWARD_DECLARE_CLASS(QTreeWidget)
QT_FORWARD_DECLARE_CLASS(QTreeWidgetItem)
QT_FORWARD_DECLARE_CLASS(QSqlDatabase)
QT_FORWARD_DECLARE_CLASS(QMenu)


class ConnectionWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ConnectionWidget(QWidget *parent = nullptr);
    virtual ~ConnectionWidget();

    QSqlDatabase currentDatabase() const;


signals:
    void tableActivated(const QString &table);
    void metaDataRequested(const QString &tableName);


public slots:
     void refresh();
     void showMetaData();
     void on_tree_currentItemChanged(QTreeWidgetItem* item, QTreeWidgetItem*previous);
     void on_tree_itemActivated(QTreeWidgetItem* item, int column);

private:
     void setActive(QTreeWidgetItem *);

     QTreeWidget *tree;
     QAction *metaDataAction;
     QString activeDb;
};

#endif // CONNECTIONWIDGET_H
