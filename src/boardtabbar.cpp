#include "boardtabbar.h"
#include <QUrl>
BoardTabBar::BoardTabBar()
{
}

int BoardTabBar::addTab(const QString& text,
                        BoardView* bv)
{
}
int BoardTabBar::addTab(const QString& text,
                        const QUrl& url)
{
}
int BoardTabBar::insertTab(int index,
                           const QString& text,
                           BoardView* bv)
{
}
int BoardTabBar::insertTab(int index,
                           const QString& text,
                           const QUrl& url)
{
}

void BoardTabBar::openBoard(const QUrl& url)
{
    //�^�u�̒�����Y�����������
    //���łɑ��݂���΃A�N�e�B�u�ɂ���
    //���݂��Ă��Ȃ���ΐV�K�쐬����
}
