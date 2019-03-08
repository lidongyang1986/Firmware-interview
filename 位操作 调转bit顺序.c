//01000111 -> 11100010

for (i=0; i<8; i++)
{
    temp=num&(1<<i);
    if(temp)
      result|=(1<<[(8-1)-i]);     //类似 a|=Bit 的置位操作
}
