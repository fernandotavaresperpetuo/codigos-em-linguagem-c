#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{int v[20],media,i;
media=0;
for(i=0;i<8;i++){
scanf(&quot;%d&quot;,&v[i]);
media=media+v[i];
}
media=media/8;
printf(&quot;media:%d\n&quot;,media);
for(i=0;i<8;i++){
if(v[i]>media)
{printf(&quot;%d\n&quot;,v[i]);
} }
system(&quot;PAUSE&quot;);
return 0;}
