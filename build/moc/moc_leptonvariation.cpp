/****************************************************************************
** Meta object code from reading C++ file 'leptonvariation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/leptonvariation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'leptonvariation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LeptonVariation_t {
    QByteArrayData data[70];
    char stringdata0[1400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LeptonVariation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LeptonVariation_t qt_meta_stringdata_LeptonVariation = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LeptonVariation"
QT_MOC_LITERAL(1, 16, 16), // "agcEnableChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "AGC_ENABLE_E"
QT_MOC_LITERAL(4, 47, 3), // "val"
QT_MOC_LITERAL(5, 51, 16), // "agcPolicyChanged"
QT_MOC_LITERAL(6, 68, 12), // "AGC_POLICY_E"
QT_MOC_LITERAL(7, 81, 24), // "agcHeqScaleFactorChanged"
QT_MOC_LITERAL(8, 106, 22), // "AGC_HEQ_SCALE_FACTOR_E"
QT_MOC_LITERAL(9, 129, 20), // "agcCalcEnableChanged"
QT_MOC_LITERAL(10, 150, 33), // "agcLinearHistogramTailSizeCha..."
QT_MOC_LITERAL(11, 184, 8), // "uint16_t"
QT_MOC_LITERAL(12, 193, 36), // "agcLinearHistogramClipPercent..."
QT_MOC_LITERAL(13, 230, 23), // "agcLinearMaxGainChanged"
QT_MOC_LITERAL(14, 254, 24), // "agcLinearMidPointChanged"
QT_MOC_LITERAL(15, 279, 31), // "agcLinearDampeningFactorChanged"
QT_MOC_LITERAL(16, 311, 26), // "agcHeqDampingFactorChanged"
QT_MOC_LITERAL(17, 338, 20), // "agcHeqMaxGainChanged"
QT_MOC_LITERAL(18, 359, 26), // "agcHeqClipLimitHighChanged"
QT_MOC_LITERAL(19, 386, 25), // "agcHeqClipLimitLowChanged"
QT_MOC_LITERAL(20, 412, 25), // "agcHeqBinExtensionChanged"
QT_MOC_LITERAL(21, 438, 21), // "agcHeqMidPointChanged"
QT_MOC_LITERAL(22, 460, 23), // "agcHeqEmptyCountChanged"
QT_MOC_LITERAL(23, 484, 32), // "agcHeqNormalizationFactorChanged"
QT_MOC_LITERAL(24, 517, 19), // "vidPcolorLutChanged"
QT_MOC_LITERAL(25, 537, 12), // "PCOLOR_LUT_E"
QT_MOC_LITERAL(26, 550, 18), // "vidPolarityChanged"
QT_MOC_LITERAL(27, 569, 10), // "POLARITY_E"
QT_MOC_LITERAL(28, 580, 26), // "vidSbNucEnableStateChanged"
QT_MOC_LITERAL(29, 607, 18), // "VID_SBNUC_ENABLE_E"
QT_MOC_LITERAL(30, 626, 27), // "radTLinearResolutionChanged"
QT_MOC_LITERAL(31, 654, 24), // "RAD_TLINEAR_RESOLUTION_E"
QT_MOC_LITERAL(32, 679, 31), // "radSpotmeterInKelvinX100Changed"
QT_MOC_LITERAL(33, 711, 22), // "radSpotmeterRoiChanged"
QT_MOC_LITERAL(34, 734, 18), // "sysGainModeChanged"
QT_MOC_LITERAL(35, 753, 15), // "SYS_GAIN_MODE_E"
QT_MOC_LITERAL(36, 769, 10), // "performFfc"
QT_MOC_LITERAL(37, 780, 15), // "updateSpotmeter"
QT_MOC_LITERAL(38, 796, 9), // "agcEnable"
QT_MOC_LITERAL(39, 806, 9), // "agcPolicy"
QT_MOC_LITERAL(40, 816, 17), // "agcHeqScaleFactor"
QT_MOC_LITERAL(41, 834, 13), // "agcCalcEnable"
QT_MOC_LITERAL(42, 848, 26), // "agcLinearHistogramTailSize"
QT_MOC_LITERAL(43, 875, 29), // "agcLinearHistogramClipPercent"
QT_MOC_LITERAL(44, 905, 16), // "agcLinearMaxGain"
QT_MOC_LITERAL(45, 922, 17), // "agcLinearMidPoint"
QT_MOC_LITERAL(46, 940, 24), // "agcLinearDampeningFactor"
QT_MOC_LITERAL(47, 965, 19), // "agcHeqDampingFactor"
QT_MOC_LITERAL(48, 985, 13), // "agcHeqMaxGain"
QT_MOC_LITERAL(49, 999, 19), // "agcHeqClipLimitHigh"
QT_MOC_LITERAL(50, 1019, 18), // "agcHeqClipLimitLow"
QT_MOC_LITERAL(51, 1038, 18), // "agcHeqBinExtension"
QT_MOC_LITERAL(52, 1057, 14), // "agcHeqMidPoint"
QT_MOC_LITERAL(53, 1072, 16), // "agcHeqEmptyCount"
QT_MOC_LITERAL(54, 1089, 25), // "agcHeqNormalizationFactor"
QT_MOC_LITERAL(55, 1115, 19), // "sysFlirSerialNumber"
QT_MOC_LITERAL(56, 1135, 17), // "oemFlirPartNumber"
QT_MOC_LITERAL(57, 1153, 21), // "oemGppSoftwareVersion"
QT_MOC_LITERAL(58, 1175, 21), // "oemDspSoftwareVersion"
QT_MOC_LITERAL(59, 1197, 12), // "vidPcolorLut"
QT_MOC_LITERAL(60, 1210, 11), // "vidPolarity"
QT_MOC_LITERAL(61, 1222, 19), // "vidSbNucEnableState"
QT_MOC_LITERAL(62, 1242, 24), // "radSpotmeterInKelvinX100"
QT_MOC_LITERAL(63, 1267, 15), // "radSpotmeterRoi"
QT_MOC_LITERAL(64, 1283, 20), // "radTLinearResolution"
QT_MOC_LITERAL(65, 1304, 11), // "sysGainMode"
QT_MOC_LITERAL(66, 1316, 17), // "ptFirmwareVersion"
QT_MOC_LITERAL(67, 1334, 21), // "supportsHwPseudoColor"
QT_MOC_LITERAL(68, 1356, 18), // "supportsRadiometry"
QT_MOC_LITERAL(69, 1375, 24) // "supportsRuntimeAgcChange"

    },
    "LeptonVariation\0agcEnableChanged\0\0"
    "AGC_ENABLE_E\0val\0agcPolicyChanged\0"
    "AGC_POLICY_E\0agcHeqScaleFactorChanged\0"
    "AGC_HEQ_SCALE_FACTOR_E\0agcCalcEnableChanged\0"
    "agcLinearHistogramTailSizeChanged\0"
    "uint16_t\0agcLinearHistogramClipPercentChanged\0"
    "agcLinearMaxGainChanged\0"
    "agcLinearMidPointChanged\0"
    "agcLinearDampeningFactorChanged\0"
    "agcHeqDampingFactorChanged\0"
    "agcHeqMaxGainChanged\0agcHeqClipLimitHighChanged\0"
    "agcHeqClipLimitLowChanged\0"
    "agcHeqBinExtensionChanged\0"
    "agcHeqMidPointChanged\0agcHeqEmptyCountChanged\0"
    "agcHeqNormalizationFactorChanged\0"
    "vidPcolorLutChanged\0PCOLOR_LUT_E\0"
    "vidPolarityChanged\0POLARITY_E\0"
    "vidSbNucEnableStateChanged\0"
    "VID_SBNUC_ENABLE_E\0radTLinearResolutionChanged\0"
    "RAD_TLINEAR_RESOLUTION_E\0"
    "radSpotmeterInKelvinX100Changed\0"
    "radSpotmeterRoiChanged\0sysGainModeChanged\0"
    "SYS_GAIN_MODE_E\0performFfc\0updateSpotmeter\0"
    "agcEnable\0agcPolicy\0agcHeqScaleFactor\0"
    "agcCalcEnable\0agcLinearHistogramTailSize\0"
    "agcLinearHistogramClipPercent\0"
    "agcLinearMaxGain\0agcLinearMidPoint\0"
    "agcLinearDampeningFactor\0agcHeqDampingFactor\0"
    "agcHeqMaxGain\0agcHeqClipLimitHigh\0"
    "agcHeqClipLimitLow\0agcHeqBinExtension\0"
    "agcHeqMidPoint\0agcHeqEmptyCount\0"
    "agcHeqNormalizationFactor\0sysFlirSerialNumber\0"
    "oemFlirPartNumber\0oemGppSoftwareVersion\0"
    "oemDspSoftwareVersion\0vidPcolorLut\0"
    "vidPolarity\0vidSbNucEnableState\0"
    "radSpotmeterInKelvinX100\0radSpotmeterRoi\0"
    "radTLinearResolution\0sysGainMode\0"
    "ptFirmwareVersion\0supportsHwPseudoColor\0"
    "supportsRadiometry\0supportsRuntimeAgcChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LeptonVariation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      32,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    1,  147,    2, 0x06 /* Public */,
       7,    1,  150,    2, 0x06 /* Public */,
       9,    1,  153,    2, 0x06 /* Public */,
      10,    1,  156,    2, 0x06 /* Public */,
      12,    1,  159,    2, 0x06 /* Public */,
      13,    1,  162,    2, 0x06 /* Public */,
      14,    1,  165,    2, 0x06 /* Public */,
      15,    1,  168,    2, 0x06 /* Public */,
      16,    1,  171,    2, 0x06 /* Public */,
      17,    1,  174,    2, 0x06 /* Public */,
      18,    1,  177,    2, 0x06 /* Public */,
      19,    1,  180,    2, 0x06 /* Public */,
      20,    1,  183,    2, 0x06 /* Public */,
      21,    1,  186,    2, 0x06 /* Public */,
      22,    1,  189,    2, 0x06 /* Public */,
      23,    1,  192,    2, 0x06 /* Public */,
      24,    1,  195,    2, 0x06 /* Public */,
      26,    1,  198,    2, 0x06 /* Public */,
      28,    1,  201,    2, 0x06 /* Public */,
      30,    1,  204,    2, 0x06 /* Public */,
      32,    0,  207,    2, 0x06 /* Public */,
      33,    0,  208,    2, 0x06 /* Public */,
      34,    1,  209,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    0,  212,    2, 0x0a /* Public */,
      37,    0,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, 0x80000000 | 25,    4,
    QMetaType::Void, 0x80000000 | 27,    4,
    QMetaType::Void, 0x80000000 | 29,    4,
    QMetaType::Void, 0x80000000 | 31,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      38, 0x80000000 | 3, 0x0049500b,
      39, 0x80000000 | 6, 0x0049500b,
      40, 0x80000000 | 8, 0x0049500b,
      41, 0x80000000 | 3, 0x0049500b,
      42, QMetaType::UInt, 0x00495003,
      43, QMetaType::UInt, 0x00495003,
      44, QMetaType::UInt, 0x00495003,
      45, QMetaType::UInt, 0x00495003,
      46, QMetaType::UInt, 0x00495003,
      47, QMetaType::UInt, 0x00495003,
      48, QMetaType::UInt, 0x00495003,
      49, QMetaType::UInt, 0x00495003,
      50, QMetaType::UInt, 0x00495003,
      51, QMetaType::UInt, 0x00495003,
      52, QMetaType::UInt, 0x00495003,
      53, QMetaType::UInt, 0x00495003,
      54, QMetaType::UInt, 0x00495003,
      55, QMetaType::QString, 0x00095001,
      56, QMetaType::QString, 0x00095001,
      57, QMetaType::QString, 0x00095001,
      58, QMetaType::QString, 0x00095001,
      59, 0x80000000 | 25, 0x0049500b,
      60, 0x80000000 | 27, 0x0049500b,
      61, 0x80000000 | 29, 0x0049500b,
      62, QMetaType::UInt, 0x00495001,
      63, QMetaType::QRect, 0x00495103,
      64, 0x80000000 | 31, 0x0049500b,
      65, 0x80000000 | 35, 0x0049500b,
      66, QMetaType::QString, 0x00095001,
      67, QMetaType::Bool, 0x00095001,
      68, QMetaType::Bool, 0x00095001,
      69, QMetaType::Bool, 0x00095001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
       0,
       0,
       0,
       0,
      17,
      18,
      19,
      21,
      22,
      20,
      23,
       0,
       0,
       0,
       0,

       0        // eod
};

void LeptonVariation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LeptonVariation *_t = static_cast<LeptonVariation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->agcEnableChanged((*reinterpret_cast< AGC_ENABLE_E(*)>(_a[1]))); break;
        case 1: _t->agcPolicyChanged((*reinterpret_cast< AGC_POLICY_E(*)>(_a[1]))); break;
        case 2: _t->agcHeqScaleFactorChanged((*reinterpret_cast< AGC_HEQ_SCALE_FACTOR_E(*)>(_a[1]))); break;
        case 3: _t->agcCalcEnableChanged((*reinterpret_cast< AGC_ENABLE_E(*)>(_a[1]))); break;
        case 4: _t->agcLinearHistogramTailSizeChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 5: _t->agcLinearHistogramClipPercentChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 6: _t->agcLinearMaxGainChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 7: _t->agcLinearMidPointChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 8: _t->agcLinearDampeningFactorChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 9: _t->agcHeqDampingFactorChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 10: _t->agcHeqMaxGainChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 11: _t->agcHeqClipLimitHighChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 12: _t->agcHeqClipLimitLowChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 13: _t->agcHeqBinExtensionChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 14: _t->agcHeqMidPointChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 15: _t->agcHeqEmptyCountChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 16: _t->agcHeqNormalizationFactorChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 17: _t->vidPcolorLutChanged((*reinterpret_cast< PCOLOR_LUT_E(*)>(_a[1]))); break;
        case 18: _t->vidPolarityChanged((*reinterpret_cast< POLARITY_E(*)>(_a[1]))); break;
        case 19: _t->vidSbNucEnableStateChanged((*reinterpret_cast< VID_SBNUC_ENABLE_E(*)>(_a[1]))); break;
        case 20: _t->radTLinearResolutionChanged((*reinterpret_cast< RAD_TLINEAR_RESOLUTION_E(*)>(_a[1]))); break;
        case 21: _t->radSpotmeterInKelvinX100Changed(); break;
        case 22: _t->radSpotmeterRoiChanged(); break;
        case 23: _t->sysGainModeChanged((*reinterpret_cast< SYS_GAIN_MODE_E(*)>(_a[1]))); break;
        case 24: _t->performFfc(); break;
        case 25: _t->updateSpotmeter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_ENABLE_E >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_POLICY_E >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_HEQ_SCALE_FACTOR_E >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_ENABLE_E >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCOLOR_LUT_E >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< POLARITY_E >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VID_SBNUC_ENABLE_E >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RAD_TLINEAR_RESOLUTION_E >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SYS_GAIN_MODE_E >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LeptonVariation::*)(AGC_ENABLE_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcEnableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(AGC_POLICY_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcPolicyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(AGC_HEQ_SCALE_FACTOR_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqScaleFactorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(AGC_ENABLE_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcCalcEnableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcLinearHistogramTailSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcLinearHistogramClipPercentChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcLinearMaxGainChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcLinearMidPointChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcLinearDampeningFactorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqDampingFactorChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqMaxGainChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqClipLimitHighChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqClipLimitLowChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqBinExtensionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqMidPointChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqEmptyCountChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::agcHeqNormalizationFactorChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(PCOLOR_LUT_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::vidPcolorLutChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(POLARITY_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::vidPolarityChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(VID_SBNUC_ENABLE_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::vidSbNucEnableStateChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(RAD_TLINEAR_RESOLUTION_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::radTLinearResolutionChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::radSpotmeterInKelvinX100Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::radSpotmeterRoiChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (LeptonVariation::*)(SYS_GAIN_MODE_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LeptonVariation::sysGainModeChanged)) {
                *result = 23;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_ENABLE_E >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_HEQ_SCALE_FACTOR_E >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGC_POLICY_E >(); break;
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCOLOR_LUT_E >(); break;
        case 22:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< POLARITY_E >(); break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RAD_TLINEAR_RESOLUTION_E >(); break;
        case 27:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SYS_GAIN_MODE_E >(); break;
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VID_SBNUC_ENABLE_E >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LeptonVariation *_t = static_cast<LeptonVariation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AGC_ENABLE_E*>(_v) = _t->bind_get<LEP_AGC_ENABLE_E,AGC_ENABLE_E>(LEP_GetAgcEnableState)(); break;
        case 1: *reinterpret_cast< AGC_POLICY_E*>(_v) = _t->bind_get<LEP_AGC_POLICY_E,AGC_POLICY_E>(LEP_GetAgcPolicy)(); break;
        case 2: *reinterpret_cast< AGC_HEQ_SCALE_FACTOR_E*>(_v) = _t->bind_get<LEP_AGC_HEQ_SCALE_FACTOR_E,AGC_HEQ_SCALE_FACTOR_E>(LEP_GetAgcHeqScaleFactor)(); break;
        case 3: *reinterpret_cast< AGC_ENABLE_E*>(_v) = _t->bind_get<LEP_AGC_ENABLE_E,AGC_ENABLE_E>(LEP_GetAgcCalcEnableState)(); break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcLinearHistogramTailSize)(); break;
        case 5: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcLinearHistogramClipPercent)(); break;
        case 6: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcLinearMaxGain)(); break;
        case 7: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcLinearMidPoint)(); break;
        case 8: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcLinearDampeningFactor)(); break;
        case 9: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqDampingFactor)(); break;
        case 10: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqMaxGain)(); break;
        case 11: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqClipLimitHigh)(); break;
        case 12: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqClipLimitLow)(); break;
        case 13: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqBinExtension)(); break;
        case 14: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqMidPoint)(); break;
        case 15: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqEmptyCount)(); break;
        case 16: *reinterpret_cast< uint*>(_v) = _t->bind_get<uint16_t,unsigned int>(LEP_GetAgcHeqNormalizationFactor)(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getSysFlirSerialNumber(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getOemFlirPartNumber(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getOemGppSoftwareVersion(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getOemDspSoftwareVersion(); break;
        case 21: *reinterpret_cast< PCOLOR_LUT_E*>(_v) = _t->bind_get<LEP_PCOLOR_LUT_E,PCOLOR_LUT_E>(LEP_GetVidPcolorLut)(); break;
        case 22: *reinterpret_cast< POLARITY_E*>(_v) = _t->bind_get<LEP_POLARITY_E,POLARITY_E>(LEP_GetVidPolarity)(); break;
        case 23: *reinterpret_cast< VID_SBNUC_ENABLE_E*>(_v) = _t->bind_get<LEP_VID_SBNUC_ENABLE_E,VID_SBNUC_ENABLE_E>(LEP_GetVidSbNucEnableState)(); break;
        case 24: *reinterpret_cast< uint*>(_v) = _t->getRadSpotmeterObjInKelvinX100(); break;
        case 25: *reinterpret_cast< QRect*>(_v) = _t->getRadSpotmeterRoi(); break;
        case 26: *reinterpret_cast< RAD_TLINEAR_RESOLUTION_E*>(_v) = _t->bind_get<LEP_RAD_TLINEAR_RESOLUTION_E,RAD_TLINEAR_RESOLUTION_E>(LEP_GetRadTLinearResolution)(); break;
        case 27: *reinterpret_cast< SYS_GAIN_MODE_E*>(_v) = _t->bind_get<LEP_SYS_GAIN_MODE_E,SYS_GAIN_MODE_E>(LEP_GetSysGainMode)(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->getPtFirmwareVersion(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->getSupportsHwPseudoColor(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getSupportsRadiometry(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->getSupportsRuntimeAgcChange(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LeptonVariation *_t = static_cast<LeptonVariation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->bind_set<LEP_AGC_ENABLE_E,AGC_ENABLE_E>(LEP_SetAgcEnableState,(bind(&LeptonVariation::agcEnableChanged,_t,_1)))(*reinterpret_cast< AGC_ENABLE_E*>(_v)); break;
        case 1: _t->bind_set<LEP_AGC_POLICY_E,AGC_POLICY_E>(LEP_SetAgcPolicy,(bind(&LeptonVariation::agcPolicyChanged,_t,_1)))(*reinterpret_cast< AGC_POLICY_E*>(_v)); break;
        case 2: _t->bind_set<LEP_AGC_HEQ_SCALE_FACTOR_E,AGC_HEQ_SCALE_FACTOR_E>(LEP_SetAgcHeqScaleFactor,(bind(&LeptonVariation::agcHeqScaleFactorChanged,_t,_1)))(*reinterpret_cast< AGC_HEQ_SCALE_FACTOR_E*>(_v)); break;
        case 3: _t->bind_set<LEP_AGC_ENABLE_E,AGC_ENABLE_E>(LEP_SetAgcCalcEnableState,(bind(&LeptonVariation::agcCalcEnableChanged,_t,_1)))(*reinterpret_cast< AGC_ENABLE_E*>(_v)); break;
        case 4: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcLinearHistogramTailSize,(bind(&LeptonVariation::agcLinearHistogramTailSizeChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 5: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcLinearHistogramClipPercent,(bind(&LeptonVariation::agcLinearHistogramClipPercentChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 6: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcLinearMaxGain,(bind(&LeptonVariation::agcLinearMaxGainChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 7: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcLinearMidPoint,(bind(&LeptonVariation::agcLinearMidPointChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 8: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcLinearDampeningFactor,(bind(&LeptonVariation::agcLinearDampeningFactorChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 9: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqDampingFactor,(bind(&LeptonVariation::agcHeqDampingFactorChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 10: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqMaxGain,(bind(&LeptonVariation::agcHeqMaxGainChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 11: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqClipLimitHigh,(bind(&LeptonVariation::agcHeqClipLimitHighChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 12: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqClipLimitLow,(bind(&LeptonVariation::agcHeqClipLimitLowChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 13: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqBinExtension,(bind(&LeptonVariation::agcHeqBinExtensionChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 14: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqMidPoint,(bind(&LeptonVariation::agcHeqMidPointChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 15: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqEmptyCount,(bind(&LeptonVariation::agcHeqEmptyCountChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 16: _t->bind_set<uint16_t,unsigned int>(LEP_SetAgcHeqNormalizationFactor,(bind(&LeptonVariation::agcHeqNormalizationFactorChanged,_t,_1)))(*reinterpret_cast< uint*>(_v)); break;
        case 21: _t->bind_set<LEP_PCOLOR_LUT_E,PCOLOR_LUT_E>(LEP_SetVidPcolorLut,(bind(&LeptonVariation::vidPcolorLutChanged,_t,_1)))(*reinterpret_cast< PCOLOR_LUT_E*>(_v)); break;
        case 22: _t->bind_set<LEP_POLARITY_E,POLARITY_E>(LEP_SetVidPolarity,(bind(&LeptonVariation::vidPolarityChanged,_t,_1)))(*reinterpret_cast< POLARITY_E*>(_v)); break;
        case 23: _t->bind_set<LEP_VID_SBNUC_ENABLE_E,VID_SBNUC_ENABLE_E>(LEP_SetVidSbNucEnableState,(bind(&LeptonVariation::vidSbNucEnableStateChanged,_t,_1)))(*reinterpret_cast< VID_SBNUC_ENABLE_E*>(_v)); break;
        case 25: _t->setRadSpotmeterRoi(*reinterpret_cast< QRect*>(_v)); break;
        case 26: _t->bind_set<LEP_RAD_TLINEAR_RESOLUTION_E,RAD_TLINEAR_RESOLUTION_E>(LEP_SetRadTLinearResolution,(bind(&LeptonVariation::radTLinearResolutionChanged,_t,_1)))(*reinterpret_cast< RAD_TLINEAR_RESOLUTION_E*>(_v)); break;
        case 27: _t->bind_set<LEP_SYS_GAIN_MODE_E,SYS_GAIN_MODE_E>(LEP_SetSysGainMode,(bind(&LeptonVariation::sysGainModeChanged,_t,_1)))(*reinterpret_cast< SYS_GAIN_MODE_E*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LeptonVariation::staticMetaObject = {
    { &AbstractCCInterface::staticMetaObject, qt_meta_stringdata_LeptonVariation.data,
      qt_meta_data_LeptonVariation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LeptonVariation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LeptonVariation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LeptonVariation.stringdata0))
        return static_cast<void*>(this);
    return AbstractCCInterface::qt_metacast(_clname);
}

int LeptonVariation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCCInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 32;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LeptonVariation::agcEnableChanged(AGC_ENABLE_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LeptonVariation::agcPolicyChanged(AGC_POLICY_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LeptonVariation::agcHeqScaleFactorChanged(AGC_HEQ_SCALE_FACTOR_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LeptonVariation::agcCalcEnableChanged(AGC_ENABLE_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LeptonVariation::agcLinearHistogramTailSizeChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LeptonVariation::agcLinearHistogramClipPercentChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LeptonVariation::agcLinearMaxGainChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LeptonVariation::agcLinearMidPointChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LeptonVariation::agcLinearDampeningFactorChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LeptonVariation::agcHeqDampingFactorChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LeptonVariation::agcHeqMaxGainChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LeptonVariation::agcHeqClipLimitHighChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LeptonVariation::agcHeqClipLimitLowChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LeptonVariation::agcHeqBinExtensionChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LeptonVariation::agcHeqMidPointChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void LeptonVariation::agcHeqEmptyCountChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void LeptonVariation::agcHeqNormalizationFactorChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void LeptonVariation::vidPcolorLutChanged(PCOLOR_LUT_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void LeptonVariation::vidPolarityChanged(POLARITY_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void LeptonVariation::vidSbNucEnableStateChanged(VID_SBNUC_ENABLE_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void LeptonVariation::radTLinearResolutionChanged(RAD_TLINEAR_RESOLUTION_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void LeptonVariation::radSpotmeterInKelvinX100Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void LeptonVariation::radSpotmeterRoiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void LeptonVariation::sysGainModeChanged(SYS_GAIN_MODE_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
