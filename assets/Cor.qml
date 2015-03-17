import bb.cascades 1.4

Page {
    property string hexa;
    titleBar: TitleBar {
        title: "111"
    }
    Container {
        Container {
            Label {
                textStyle.fontSize: FontSize.XXLarge
                textStyle.color: Color.create(hexa)
                text: hexa
            }
        }
    }
}
