/*
 * Copyright (C) 2010 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2010 Robin Burchell <robin.burchell@collabora.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include "qtmodelwidget.h"

namespace Ui {
    class TestWidget;
}

class TestWidget : public QtModelWidget
{
    Q_OBJECT

public:
    Q_INVOKABLE
    explicit TestWidget(QAbstractItemModel *model, QModelIndex index);
    ~TestWidget();

    void dataChanged();
public slots:
    void onUpdate();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::TestWidget *ui;
};

#endif // TESTWIDGET_H
