/*
 * List.hpp
 *
 *  Created on: 16/03/2015
 *      Author: Predator
 */

#ifndef LIST_HPP_
#define LIST_HPP_

#include <QObject>
#include <bb/cascades/GroupDataModel>

using namespace bb::cascades;

class List : public QObject
{
    Q_OBJECT
    Q_PROPERTY(GroupDataModel * model READ model NOTIFY onModelChanged);

public:

    Q_INVOKABLE GroupDataModel * model();

    List();
    virtual ~List();

    Q_INVOKABLE void adicionarCorNaLista();

private:
    GroupDataModel * m_model;

signals:
    void onModelChanged();
};

#endif /* LIST_HPP_ */
