#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    if(argc!=2){
    fprintf(stderr,"Usage: ./recover image");
        return 1;
    }
    char *infile=argv[1];
    FILE *ptr=fopen(infile,"r");
    if (ptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    FILE* out=NULL;
   unsigned char buffer[512];
    int fcount=0;
    int fileopen=0;
    char filename[10];
    while(fread(buffer,1,512,ptr)==512)
    {
        if(buffer[0]==0xff&&buffer[1]==0xd8&&buffer[2]==0xff&&(buffer[3]&0xf0)==0xe0)
{
    if(fileopen==0){
    sprintf(filename,"%.3i.jpg",fcount);
    out=fopen(filename,"w");

    fileopen=1;
    fcount++;
}
    else{
        fclose(out);

        sprintf(filename,"%.3i.jpg",fcount);
        out=fopen(filename,"w");
     fileopen=1;
    fcount++;
    }
}
    if(fileopen==1){
    fwrite(buffer,1,512,out); }
}

    fclose(ptr);
    fclose(out);
    return 0;
}