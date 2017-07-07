/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    for(int i=0;i<n;i++)
    {
    if(values[i]==value)
    {
    return true;
    }
    }return false;
}

/**
 * Sorts array of n values.
 */
void sort(int a[], int n)
{int t;
    // TODO: implement a sorting algorithm
    for(int i=0;i<n;i++)
    {
    for(int j=i;j<n;j++)
    {
    if(a[j]<a[i])
    {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
    return;
}}}
