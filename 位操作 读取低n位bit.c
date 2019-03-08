int GetFieldValue (int byte, int field)
{
byte = byte >> field;
byte = byte & 0x01;
return byte;
}



bit = (byte >> 4) & 0x01;
