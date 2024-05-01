// class Solution {
//     public int getithBit(int num , int i){
//         if(((1<<i) & num) == 0){
//             return 0;
//         }
//         return 1;
//     }
//     public int getSum(int a, int b) {
//         int cBit = 0;
//         int carry = 0;
//         int c = 0;
//         int aBit,bBit;
//         int flag = 0;

//         if(a < 0 && b < 0) {
//             a = ~a + 1;
//             b= ~b + 1;
//             flag  = 1;
//         }
//         else if(a < 0 || b < 0) {
//             if(a < 0) {
//                 if(-1*a > b){
//                     a = ~a + 1;
//                     b = ~b + 1;
//                     flag = 1;
//                 }
//             }else{
//                 if(-1*b > a){
//                     a = ~a + 1;
//                     b = ~b + 1;
//                     flag = 1;
//                 }
//             }
//         }
//         for(int i = 0 ; i <= 10 ; i++){
//             aBit= getithBit(a,i);
//             bBit = getithBit(b,i);
//             cBit = aBit ^ bBit ^ carry;
//             c = (cBit << i) | c;

//             if( (aBit == 1 && bBit == 1) || (aBit == 1 && carry == 1) || (bBit == 1 && carry == 1) ){
//                 carry = 1;
//             }else{
//                 carry = 0;
//             }

//         }
//         if(flag == 1){
//             c = ~c + 1;
//         }
//         return c;
//     }
// }
class Solution {
    public int getSum(int a, int b) {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        while (b != 0) {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }

        return a;
    }
}