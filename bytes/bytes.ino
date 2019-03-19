// A byte is a group of 8 bits, a bit is the most basic unit and can be either 1 or 0. One byte can represent a decimal number between 0(00) an 255

// think of buffer as just another word for an array. Like a byte is a group of 8 bits, a buffer is a group of predefined number of bytes

void setup()
{
    Serial.begin(9600);
}

void loop()
{

    byte data[] = {0xFF,
                   0xF0,
                   0x0F,
                   0x11};
    Serial.println(data);
}