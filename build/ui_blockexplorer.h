/********************************************************************************
** Form generated from reading UI file 'blockexplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEXPLORER_H
#define UI_BLOCKEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockExplorer
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *blockWidget;
    QGridLayout *blockGrid;
    QPushButton *blockButton;
    QSpinBox *numberBox;
    QLabel *blockTimeText;
    QLabel *blockTimeData;
    QLabel *hashText;
    QLabel *hashData;
    QLabel *merkleText;
    QLabel *merkleData;
    QLabel *baseText;
    QLabel *baseData;
    QLabel *diffText;
    QLabel *diffData;
    QLabel *coinSupplyText;
    QLabel *coinSupplyData;
    QLabel *blockTxText;
    QLabel *blockTxData;
    QSpacerItem *verticalSpacerMiddle;
    QPushButton *txButton;
    QLineEdit *txLine;
    QLabel *txText;
    QLabel *txData;
    QLabel *txTimeText;
    QLabel *txTimeData;
    QLabel *valueText;
    QLabel *valueData;
    QLabel *feeText;
    QLabel *feeData;
    QLabel *inputText;
    QLabel *inputData;
    QLabel *outputText;
    QLabel *outputData;
    QSpacerItem *verticalSpacerBottom;

    void setupUi(QDialog *BlockExplorer)
    {
        if (BlockExplorer->objectName().isEmpty())
            BlockExplorer->setObjectName(QStringLiteral("BlockExplorer"));
        BlockExplorer->setWindowModality(Qt::NonModal);
        BlockExplorer->setEnabled(true);
        BlockExplorer->resize(760, 470);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockExplorer->sizePolicy().hasHeightForWidth());
        BlockExplorer->setSizePolicy(sizePolicy);
        BlockExplorer->setMinimumSize(QSize(0, 0));
        BlockExplorer->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockExplorer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(10, 10, 10, 5);
        scrollArea = new QScrollArea(BlockExplorer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        blockWidget = new QWidget();
        blockWidget->setObjectName(QStringLiteral("blockWidget"));
        blockWidget->setGeometry(QRect(0, 0, 736, 451));
        blockGrid = new QGridLayout(blockWidget);
        blockGrid->setSpacing(8);
        blockGrid->setContentsMargins(4, 4, 4, 4);
        blockGrid->setObjectName(QStringLiteral("blockGrid"));
        blockButton = new QPushButton(blockWidget);
        blockButton->setObjectName(QStringLiteral("blockButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(blockButton->sizePolicy().hasHeightForWidth());
        blockButton->setSizePolicy(sizePolicy1);
        blockButton->setMinimumSize(QSize(180, 26));

        blockGrid->addWidget(blockButton, 1, 0, 1, 1);

        numberBox = new QSpinBox(blockWidget);
        numberBox->setObjectName(QStringLiteral("numberBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numberBox->sizePolicy().hasHeightForWidth());
        numberBox->setSizePolicy(sizePolicy2);
        numberBox->setMinimumSize(QSize(500, 0));
        numberBox->setMaximum(99999999);

        blockGrid->addWidget(numberBox, 1, 1, 1, 1);

        blockTimeText = new QLabel(blockWidget);
        blockTimeText->setObjectName(QStringLiteral("blockTimeText"));

        blockGrid->addWidget(blockTimeText, 2, 0, 1, 1);

        blockTimeData = new QLabel(blockWidget);
        blockTimeData->setObjectName(QStringLiteral("blockTimeData"));
        blockTimeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(blockTimeData, 2, 1, 1, 1);

        hashText = new QLabel(blockWidget);
        hashText->setObjectName(QStringLiteral("hashText"));

        blockGrid->addWidget(hashText, 3, 0, 1, 1);

        hashData = new QLabel(blockWidget);
        hashData->setObjectName(QStringLiteral("hashData"));
        hashData->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hashData->sizePolicy().hasHeightForWidth());
        hashData->setSizePolicy(sizePolicy3);
        hashData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(hashData, 3, 1, 1, 1);

        merkleText = new QLabel(blockWidget);
        merkleText->setObjectName(QStringLiteral("merkleText"));

        blockGrid->addWidget(merkleText, 4, 0, 1, 1);

        merkleData = new QLabel(blockWidget);
        merkleData->setObjectName(QStringLiteral("merkleData"));
        sizePolicy3.setHeightForWidth(merkleData->sizePolicy().hasHeightForWidth());
        merkleData->setSizePolicy(sizePolicy3);
        merkleData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(merkleData, 4, 1, 1, 1);

        baseText = new QLabel(blockWidget);
        baseText->setObjectName(QStringLiteral("baseText"));

        blockGrid->addWidget(baseText, 5, 0, 1, 1);

        baseData = new QLabel(blockWidget);
        baseData->setObjectName(QStringLiteral("baseData"));
        sizePolicy3.setHeightForWidth(baseData->sizePolicy().hasHeightForWidth());
        baseData->setSizePolicy(sizePolicy3);
        baseData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(baseData, 5, 1, 1, 1);

        diffText = new QLabel(blockWidget);
        diffText->setObjectName(QStringLiteral("diffText"));

        blockGrid->addWidget(diffText, 6, 0, 1, 1);

        diffData = new QLabel(blockWidget);
        diffData->setObjectName(QStringLiteral("diffData"));
        diffData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(diffData, 6, 1, 1, 1);

        coinSupplyText = new QLabel(blockWidget);
        coinSupplyText->setObjectName(QStringLiteral("coinSupplyText"));

        blockGrid->addWidget(coinSupplyText, 7, 0, 1, 1);

        coinSupplyData = new QLabel(blockWidget);
        coinSupplyData->setObjectName(QStringLiteral("coinSupplyData"));
        coinSupplyData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(coinSupplyData, 7, 1, 1, 1);

        blockTxText = new QLabel(blockWidget);
        blockTxText->setObjectName(QStringLiteral("blockTxText"));
        blockTxText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(blockTxText, 8, 0, 1, 1);

        blockTxData = new QLabel(blockWidget);
        blockTxData->setObjectName(QStringLiteral("blockTxData"));
        blockTxData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(blockTxData, 8, 1, 1, 1);

        verticalSpacerMiddle = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        blockGrid->addItem(verticalSpacerMiddle, 9, 0, 1, 1);

        txButton = new QPushButton(blockWidget);
        txButton->setObjectName(QStringLiteral("txButton"));
        sizePolicy1.setHeightForWidth(txButton->sizePolicy().hasHeightForWidth());
        txButton->setSizePolicy(sizePolicy1);
        txButton->setMinimumSize(QSize(180, 26));

        blockGrid->addWidget(txButton, 10, 0, 1, 1);

        txLine = new QLineEdit(blockWidget);
        txLine->setObjectName(QStringLiteral("txLine"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(txLine->sizePolicy().hasHeightForWidth());
        txLine->setSizePolicy(sizePolicy4);

        blockGrid->addWidget(txLine, 10, 1, 1, 1);

        txText = new QLabel(blockWidget);
        txText->setObjectName(QStringLiteral("txText"));

        blockGrid->addWidget(txText, 11, 0, 1, 1);

        txData = new QLabel(blockWidget);
        txData->setObjectName(QStringLiteral("txData"));
        txData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(txData, 11, 1, 1, 1);

        txTimeText = new QLabel(blockWidget);
        txTimeText->setObjectName(QStringLiteral("txTimeText"));

        blockGrid->addWidget(txTimeText, 12, 0, 1, 1);

        txTimeData = new QLabel(blockWidget);
        txTimeData->setObjectName(QStringLiteral("txTimeData"));
        txTimeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(txTimeData, 12, 1, 1, 1);

        valueText = new QLabel(blockWidget);
        valueText->setObjectName(QStringLiteral("valueText"));

        blockGrid->addWidget(valueText, 13, 0, 1, 1);

        valueData = new QLabel(blockWidget);
        valueData->setObjectName(QStringLiteral("valueData"));
        valueData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(valueData, 13, 1, 1, 1);

        feeText = new QLabel(blockWidget);
        feeText->setObjectName(QStringLiteral("feeText"));

        blockGrid->addWidget(feeText, 14, 0, 1, 1);

        feeData = new QLabel(blockWidget);
        feeData->setObjectName(QStringLiteral("feeData"));
        feeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(feeData, 14, 1, 1, 1);

        inputText = new QLabel(blockWidget);
        inputText->setObjectName(QStringLiteral("inputText"));
        inputText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(inputText, 15, 0, 1, 1);

        inputData = new QLabel(blockWidget);
        inputData->setObjectName(QStringLiteral("inputData"));
        inputData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(inputData, 15, 1, 1, 1);

        outputText = new QLabel(blockWidget);
        outputText->setObjectName(QStringLiteral("outputText"));
        outputText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(outputText, 16, 0, 1, 1);

        outputData = new QLabel(blockWidget);
        outputData->setObjectName(QStringLiteral("outputData"));
        outputData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(outputData, 16, 1, 1, 1);

        verticalSpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        blockGrid->addItem(verticalSpacerBottom, 17, 0, 1, 1);

        scrollArea->setWidget(blockWidget);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(BlockExplorer);

        QMetaObject::connectSlotsByName(BlockExplorer);
    } // setupUi

    void retranslateUi(QDialog *BlockExplorer)
    {
        BlockExplorer->setWindowTitle(QApplication::translate("BlockExplorer", "Block Explorer", 0));
        blockButton->setText(QApplication::translate("BlockExplorer", "Decode block", 0));
        blockTimeText->setText(QApplication::translate("BlockExplorer", "General data:", 0));
        hashText->setText(QApplication::translate("BlockExplorer", "Hash:", 0));
        hashData->setText(QApplication::translate("BlockExplorer", "0x0", 0));
        merkleText->setText(QApplication::translate("BlockExplorer", "Merkle root:", 0));
        merkleData->setText(QApplication::translate("BlockExplorer", "0x0", 0));
        baseText->setText(QApplication::translate("BlockExplorer", "Coin base:", 0));
        baseData->setText(QApplication::translate("BlockExplorer", "0x0", 0));
        diffText->setText(QApplication::translate("BlockExplorer", "Difficulty, target, nonce:", 0));
        diffData->setText(QApplication::translate("BlockExplorer", "0.00 0x0 0x0", 0));
        coinSupplyText->setText(QApplication::translate("BlockExplorer", "Coin supply:", 0));
        coinSupplyData->setText(QApplication::translate("BlockExplorer", "0.00 xsr", 0));
        blockTxText->setText(QApplication::translate("BlockExplorer", "Payments:", 0));
        blockTxData->setText(QApplication::translate("BlockExplorer", "N/A", 0));
        txButton->setText(QApplication::translate("BlockExplorer", "Decode payment", 0));
        txLine->setInputMask(QString());
        txText->setText(QApplication::translate("BlockExplorer", "Payment ID:", 0));
        txData->setText(QApplication::translate("BlockExplorer", "N/A", 0));
        txTimeText->setText(QApplication::translate("BlockExplorer", "General data:", 0));
        txTimeData->setText(QString());
        valueText->setText(QApplication::translate("BlockExplorer", "Value:", 0));
        valueData->setText(QApplication::translate("BlockExplorer", "0.00 xsr", 0));
        feeText->setText(QApplication::translate("BlockExplorer", "Fee paid:", 0));
        feeData->setText(QApplication::translate("BlockExplorer", "0.00 xsr", 0));
        inputText->setText(QApplication::translate("BlockExplorer", "Inputs:", 0));
        inputData->setText(QApplication::translate("BlockExplorer", "N/A", 0));
        outputText->setText(QApplication::translate("BlockExplorer", "Outputs:", 0));
        outputData->setText(QApplication::translate("BlockExplorer", "N/A", 0));
    } // retranslateUi

};

namespace Ui {
    class BlockExplorer: public Ui_BlockExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEXPLORER_H
