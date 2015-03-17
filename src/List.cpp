/*
 * List.cpp
 *
 *  Created on: 16/03/2015
 *      Author: Predator
 */

#include <src/List.hpp>
#include <stdlib.h>
#include <time.h>

List::List() : QObject()
{
            qRegisterMetaType<GroupDataModel *>("GroupDataModel *");
            m_model = new GroupDataModel();
            m_model->setSortedAscending(false);
            m_model->setGrouping(bb::cascades::ItemGrouping::None);
    // TODO Auto-generated constructor stub

}

GroupDataModel * List::model() {
    return m_model;
}

List::~List()
{
    // TODO Auto-generated destructor stub
}



void List::adicionarCorNaLista(){
            QVariantMap Cor;
            int x;
            char cor[20],hexa[20];

            srand( (unsigned)time(NULL) );
            x = 1 + (rand() % 5);

            if (x==1){
                strcpy(cor,"Black");
                strcpy(hexa,"#000000");
            }else if(x==2){
                strcpy(cor,"Blue");
                strcpy(hexa,"#0000FF");
            }else if(x==3){
                strcpy(cor,"Purple");
                strcpy(hexa,"#800080");
            }else if(x==4){
                strcpy(cor,"Red");
                strcpy(hexa,"#FF0000");
            }else{
                strcpy(cor,"Green");
                strcpy(hexa,"#008000");
            }
            Cor["Cor"] = cor;
            Cor["Hexa"] = hexa;
            m_model->insert(Cor);
            emit onModelChanged();
}
