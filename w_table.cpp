#include "W_Table.h"

W_Table::W_Table(QGraphicsItem *parent)
{
    widget = new QCalendarWidget();
    widget->setAttribute(Qt::WA_NoSystemBackground);
    setWidget(widget);
    QObject::connect(widget, SIGNAL(clicked(QDate)), this, SIGNAL(clicked(QDate)));
}