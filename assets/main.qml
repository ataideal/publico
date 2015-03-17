/*
 * Copyright (c) 2011-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import bb.cascades 1.4

NavigationPane {
    id: pane
    attachedObjects: Cor {
        id: page
    }
Page {
    id: pagina
    
    titleBar: TitleBar {
        title: "Lista Dinâmica"
    }
    Container { id: container
        Container {
            horizontalAlignment: HorizontalAlignment.Center
            topPadding: 50
            Button {
                text: "Inserir Cor Aleatória"
                onClicked: {
                    _listar.adicionarCorNaLista()
                }
            }
            

        }
        
        Container {
            ListView {
                dataModel:_listar.model
                
                listItemComponents: [
                    
                    ListItemComponent {
                        type: "Cor"
                        
                        StandardListItem {
                            title: "Cor"
                            }
                            
                    }
                    
                    
                ]
                onTriggered: {
                    var selectedItem = dataModel.data(indexPath)
                    page.hexa = selectedItem.Hexa
                    page.titleBar.title = selectedItem.Cor
                    push(page)
                }
            }
        }
        
        
    }
}
}