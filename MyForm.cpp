#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void GD1::MyForm::textbox_Leave(System::Object^ sender, System::EventArgs^ e)
{
    TextBox^ textBox = safe_cast<TextBox^>(sender);

    if (textBox->Text == String::Empty) {
        textBox->Text = "0";
    }
    else {
        try {
            Double::Parse(textBox->Text);
        }
        catch (Exception^ e) {
            textBox->Text = "0";
            MessageBox::Show("Введите верное числовое значение");
        }
    }

    return System::Void();
}

System::Void GD1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    double x1 = Double::Parse(x1text->Text);
    double x2 = Double::Parse(x2text->Text);
    double x3 = Double::Parse(x3text->Text);
    double x4 = Double::Parse(x4text->Text);
    double x5 = Double::Parse(x5text->Text);
    double x6 = Double::Parse(x6text->Text);
    double x7 = Double::Parse(x7text->Text);
    double x8 = Double::Parse(x8text->Text);

    double y1 = Double::Parse(y1text->Text);
    double y2 = Double::Parse(y2text->Text);
    double y3 = Double::Parse(y3text->Text);
    double y4 = Double::Parse(y4text->Text);
    double y5 = Double::Parse(y5text->Text);
    double y6 = Double::Parse(y6text->Text);
    double y7 = Double::Parse(y7text->Text);
    double y8 = Double::Parse(y8text->Text);

    double v41 = y2 - y8;
    double v42 = y3 - y1;
    double v43 = y4 - y2;
    double v44 = y5 - y3;
    double v45 = y6 - y4;
    double v46 = y7 - y5;
    double v47 = y8 - y6;
    double v48 = y1 - y7;

    double v51 = x8 - x2;
    double v52 = x1 - x3;
    double v53 = x2 - x4;
    double v54 = x3 - x5;
    double v55 = x4 - x6;
    double v56 = x5 - x7;
    double v57 = x6 - x8;
    double v58 = x7 - x1;

    double v61 = x1 * v41;
    double v62 = x2 * v42;
    double v63 = x3 * v43;
    double v64 = x4 * v44;
    double v65 = x5 * v45;
    double v66 = x6 * v46;
    double v67 = x7 * v47;
    double v68 = x8 * v48;

    double s16 = (v61 + v62 + v63 + v64 + v65 + v66 + v67 + v68) * 0.5;
    double m26 = Math::Round(s16 * 0.0001, 1);

    double v71 = y1 * v51;
    double v72 = y2 * v52;
    double v73 = y3 * v53;
    double v74 = y4 * v54;
    double v75 = y5 * v55;
    double v76 = y6 * v56;
    double v77 = y7 * v57;
    double v78 = y8 * v58;

    double s17 = (v71 + v72 + v73 + v74 + v75 + v76 + v77 + v78) * 0.5;
    double m27 = Math::Round(s17 * 0.0001, 1);

    l41->Text = v41.ToString();
    l42->Text = v42.ToString();
    l43->Text = v43.ToString();
    l44->Text = v44.ToString();
    l45->Text = v45.ToString();
    l46->Text = v46.ToString();
    l47->Text = v47.ToString();
    l48->Text = v48.ToString();

    l51->Text = v51.ToString();
    l52->Text = v52.ToString();
    l53->Text = v53.ToString();
    l54->Text = v54.ToString();
    l55->Text = v55.ToString();
    l56->Text = v56.ToString();
    l57->Text = v57.ToString();
    l58->Text = v58.ToString();

    l61->Text = v61.ToString();
    l62->Text = v62.ToString();
    l63->Text = v63.ToString();
    l64->Text = v64.ToString();
    l65->Text = v65.ToString();
    l66->Text = v66.ToString();
    l67->Text = v67.ToString();
    l68->Text = v68.ToString();

    l71->Text = v71.ToString();
    l72->Text = v72.ToString();
    l73->Text = v73.ToString();
    l74->Text = v74.ToString();
    l75->Text = v75.ToString();
    l76->Text = v76.ToString();
    l77->Text = v77.ToString();
    l78->Text = v78.ToString();

    ls16->Text = s16.ToString();
    lm26->Text = String::Format("{0} га", m26);

    ls17->Text = s17.ToString();
    lm27->Text = String::Format("{0} га", m27);

    return System::Void();
}
