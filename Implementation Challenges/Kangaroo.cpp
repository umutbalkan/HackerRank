/*    Kangaroo - HackerRank    @umut    link: https://www.hackerrank.com/challenges/kangaroo*/#include <iostream>using namespace std;int main(){    int x1;    int v1;    int x2;    int v2;    int location_diff, velocity_diff;    cin >> x1 >> v1 >> x2 >> v2;        if(max(x1,x2) == x1 && v2 - v1 > 0){        location_diff = x1 - x2;        velocity_diff = v2 - v1;    }    else if(max(x1,x2) == x2 && v1 - v2 > 0){        location_diff = x2 - x1;        velocity_diff = v1 - v2;    }    else{        cout << "NO";        return 0;    }        ((location_diff % velocity_diff == 0) ? cout << "YES" : cout << "NO");    return 0;}