#include "MF_TFT_ST7735.h"

void MF_TFT_ST7735::begin()
{

    tft.initR();
    tft.fillScreen(ST77XX_BLACK);
    tft.enableDisplay(true);
}

void MF_TFT_ST7735::attach(int8_t cs, int8_t dc, int8_t rst)
{
    _CS          = cs;
    _DC          = dc;
    _RST         = rst;
    _initialised = true;
    begin();
}

void MF_TFT_ST7735::detach()
{
    if (!_initialised)
        return;
    _initialised = false;
}

void MF_TFT_ST7735::displayTest()
{
    tft.drawCircle(20, 20, 5, 0x0000);
}