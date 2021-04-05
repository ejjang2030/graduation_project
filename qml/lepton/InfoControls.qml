import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import QtQml 2.2

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null

    GroupBox {
        id: groupBox1
        clip: true

        anchors.margins: 5
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.left: parent.left
        title: qsTr("Developer Information")

        Grid {
            id: grid

            columns: 1
            rows: 8
            anchors.fill: parent
            spacing: 10
            flow: Grid.TopToBottom

            Label {
                id: labelPartNumber
                text: qsTr("Title: KPU GetThermal") //+ acq.cci.oemFlirPartNumber
            }

            Label {
                id: labelSerialNumber
                text: qsTr("Developer: Eunjae Jang") //+ acq.cci.sysFlirSerialNumber
            }

            Label {
                id: labelGppSoftwareVers
                text: qsTr("Version: KGT-1.0") //+ acq.cci.oemGppSoftwareVersion
            }

            Label {
                id: labelPtVersion 
                text: qsTr("BreakBoard Version: PT-2 ") //+ acq.cci.ptFirmwareVersion
            }
            
            Label {
                id: labelMax
				text: qsTr("MaxTemp: ") + (acq.dataFormatter.maxVal - 27315) / 100.0 + qsTr("°C")
			}
        }
    }
}
