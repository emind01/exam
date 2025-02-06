unsigned char reverse(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}