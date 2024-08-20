// psuedocode
// GCD or HCF
// n1 = 20, n2 = 40

for (i = min(n1, n2); i>=1; i--){
    if((n1 % i == 0) && (n2 % i == 0)){
        print(i);
        break;
    }
}