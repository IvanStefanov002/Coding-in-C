#include <stdio.h>
#include <stdlib.h>
#define NL printf("\n");

/*
int station_malloc(){
    int i,n;
    int *stations;

    i=7;

    stations= (int*) malloc (i*4);
    if (stations == NULL) exit (1);

    for(n=0;n<i;n++){
        stations[n]=n;
    }

    for(n=0;n<7;n++){
        printf("%d ", stations[n]);
        NL;
    }

    int *ptrToStations;
    ptrToStations = stations;
    stations = (int*) malloc (++i*4);

    printf("\ni=%d\n", i);

    for(n=0;n<7;n++){
        stations[n]=ptrToStations[n];
        stations[i-1]=i;
    }

    for(n=0;n<7;n++){
        printf("%d ",stations[n]);
        NL;
    }
    ptrToStations=stations;
    int x=3;
    for(n=x;n<i;n++){
        ptrToStations[n]=ptrToStations[n];
        stations = (int*) malloc (--i*4);
    }
    for(n=0;n<7;n++){
        stations[n]=ptrToStations[n];
    }
    for(n=0;n<7;n++){
        printf("%d ", stations[n]);
    }

    free(stations);
    free(ptrToStations);
}
*/

int station_realloc(){
    int i,count=0;
    int *station=NULL, *ptrToStation=NULL;

    for(i=1;i<=7;i++,count++){
        ptrToStation=(int*)realloc(station,count*sizeof(int));
    }
    if(station==NULL){
        printf("error");
    }
    if (station != NULL){
        station=ptrToStation;
        station[count]=i;
    }else{
        printf("error2");
    }

    for(i=0;i<7;i++){
        printf("%d ", station[i]);
        NL;
    }

    //adding 8th element
    ptrToStation=(int*)realloc(station,++count*sizeof(int));
    if(ptrToStation!=NULL){
        station=ptrToStation;
        station[count-1]=count;
    } //ako e zadelena pamet


    for(i=0;i<count;i++){
        printf("%d ",station[i]);
        NL;
    }
    int x=3;
    for(i=x;i<count;i++){
        ptrToStation[i-1]=ptrToStation[i];
    }

    NL;
    NL;
    //premahvane na 8miq element
    ptrToStation=(int*)realloc(station,--count*sizeof(int));

    if(ptrToStation!=NULL){
        station=ptrToStation;
    }

    for(i=0;i<count;i++){
        printf("%d ",station[i]);
        NL;
    }

    free(station);
    free(ptrToStation);

}
int main()
{
    /*
    int constant = 5;
    int *c_pointer;

    c_pointer=&constant;
    printf("value of constant(pointer): %d", *c_pointer);
    NL;
    printf("value of constant(int): %d", constant);
    NL;
    printf("address of constant(pointer): %x", c_pointer);
    NL;
    printf("address of constant: %x", &constant);
    NL;
    NL;
    printf("Address of constant variable: %x\n", &constant);
    printf("Address stored in ip vairable: %x\n", c_pointer);
    printf("Value of *c_pointer variable: %d\n", *c_pointer);

    void *malloc(size_t bytes);
    void *calloc(size_t elements, size_t bytes_per_element);
    void *realloc(void *prev_address, size_t new_size);
    void free(void *array);
    */

    station_realloc();
    return 0;
}
