//
// Created by Horatiu on 06-Mar-19.
//

#ifndef LAB3_4_MODEL_H
#define LAB3_4_MODEL_H

typedef struct _Date
{
    int day;
    int month;
    int year;
} Date;

typedef struct _Offer
{
    char type[20];
    char destination[100];
    Date departureDate;
    int price;
} Offer;

void OfferCreate(Offer **offer, char destination[100], int day, int month, int year, char type[20], int price);

void OfferDestroy(Offer **offer);

#endif //LAB3_4_MODEL_H
