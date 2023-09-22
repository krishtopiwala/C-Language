#include <stdio.h>

struct getBill
{
    int rate, qty, amt, dis, billAmt, gst, netBill;
};

int main()
{
    struct getBill gb;
                                            
    printf("enter rate: ");
    scanf("%d", &gb.rate);
    printf("enter quantity: ");
    scanf("%d", &gb.qty);

    gb.amt = gb.rate * gb.qty;
    gb.dis = (gb.amt * 5) / 100;
    gb.billAmt = (gb.amt - gb.dis);
    gb.gst = (gb.billAmt * 0.18);
    gb.netBill = gb.billAmt + gb.gst;

    printf("\nRate\tQty\tAmount\tDis\tBill\tGST\tNetBill\n");

    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", gb.rate, gb.qty, gb.amt, gb.dis, gb.billAmt, gb.gst, gb.netBill);

    return 0;
}