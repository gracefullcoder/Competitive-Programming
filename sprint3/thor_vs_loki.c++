#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int arr[n * k];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
        for (long long int j = 1; j < k; j++)
        {
            arr[n * j + i] = arr[i];
        }
    }

    long long int maxsum = INT_MIN;
    long long int currsum = 0;
    for (long long int i = 0; i < n * k; i++)
    {
        currsum += arr[i];
        if (currsum >= 0)
        {
            if (maxsum < currsum)
            {
                maxsum = currsum;
            }
        } else{
            currsum = 0;
        }
    }
    if(maxsum < 0) {
        cout << max;
    } else{
        cout << maxsum;
    }
    return 0;
}

            DECLARE
            p_S_ID VARCHAR2;
            p_Student_Name CHAR;
            p_Father_Name CHAR;
            p_Mother_Name CHAR;
            p_Age INTEGER;
            p_Contact_Number NUMBER;
            p_Email_Address VARCHAR2;
            p_Aadhar_Number NUMBER;
            BEGIN
            INSERT INTO Student_Details(S_ID, Student_Name, Father_Name, Mother_Name, Age, Contact_Number, Email_Address, Aadhar_Number)
            VALUES (p_S_ID, p_Student_Name, p_Father_Name, p_Mother_Name, p_Age, p_Contact_Number, p_Email_Address, p_Aadhar_Number);
            COMMIT;
                EXCEPTION
            WHEN OTHERS THEN
                ROLLBACK;
                RAISE;
            END InsertIntoStudent_Details;
            /;