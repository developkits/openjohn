/*
* Copyright 2009 NOSE Takafumi <ahya365@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*/
#ifndef BBSRES_H
#define BBSRES_H
#include <QString>
class BBSRes
{
public:
    BBSRes();
    //[名前]<>[メール]<>[日付] [ID] [BE-ID]<>[本文]<>[スレッドタイトル]
    QString name;
    QString mail;
    QString info;
    QString body;
};

#endif // BBSRES_H
