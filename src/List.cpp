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
            QString cor, hexa;

            srand( (unsigned) time(NULL) );
            x = 1 + (rand() % 5);

            if (x==1){
                cor = "Black";
                hexa = "#000000";
            }else if(x==2){
                cor = "Blue";
                hexa = "#0000FF";
            }else if(x==3){
                cor = "Purple";
                hexa = "#800080";
            }else if(x==4){
                cor = "Red";
                hexa = "#FF0000";
            }else{
                cor = "Green";
                hexa = "#008000";
            }
            Cor["Cor"] = cor;
            Cor["Hexa"] = hexa;
            m_model->insert(Cor);
            emit onModelChanged();
}
