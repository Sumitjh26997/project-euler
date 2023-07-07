/**
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used? 
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains$20 letters. The use of "and" when writing out numbers is in compliance with British usage.
*/

#include<iostream>
#include<cstdio>
#include <unordered_map>
using namespace std;

const int and_length = 3;
const int hundred_length = 7;
const int thousand_length = 8;

void initialize_map(unordered_map<int, string> &umap) {
	umap[1] = "One";
	umap[2] = "Two";
	umap[3] = "Three";
	umap[4] = "Four";
	umap[5] = "Five";
	umap[6] = "Six";
	umap[7] = "Seven";
	umap[8] = "Eight";
	umap[9] = "Nine";
	umap[10] = "Ten";
	umap[11] = "Eleven";
	umap[12] = "Twelve";
	umap[13] = "Thirteen";
	umap[14] = "Fourteen";
	umap[15] = "Fifteen";
	umap[16] = "Sixteen";
	umap[17] = "Seventeen";
	umap[18] = "Eighteen";
	umap[19] = "Nineteen";
	umap[20] = "Twenty";
	umap[30] = "Thirty";
	umap[40] = "Forty";
	umap[50] = "Fifty";
	umap[60] = "Sixty";
	umap[70] = "Seventy";
	umap[80] = "Eighty";
	umap[90] = "Ninety";
}

int get_length(unordered_map<int, string> &umap, int num) {
	if(num % 10 == num || num / 10 == 1) {		
		cout <<"Single digit or teens\t" << num << "\t" << umap[num].size();
		return umap[num].size();
	} else if(num / 10 != 0 && num / 100 == 0) {
		cout <<"Double digit\t" << num << "\t" << umap[((num/10) * 10)].size() + umap[(num % 10)].size();
		return umap[((num/10) * 10)].size() + umap[(num % 10)].size();
	} else if(num / 1000 != 1) {
		if(num % 100 == 0) {
			cout <<"Triple digit\t" << num << "\t" << umap[(num/100)].size() + hundred_length ;
			return umap[(num/100)].size() + hundred_length;
		}
		int last_two_digits = num % 100;
		if(last_two_digits / 10 == 1) {
			cout <<"Triple digit\t" << num << "\t" << umap[(num/100)].size() + hundred_length + and_length + umap[last_two_digits].size();
			return umap[(num/100)].size() + hundred_length + and_length + umap[last_two_digits].size();
		}
		cout <<"Triple digit\t" << num << "\t" << umap[(num/100)].size() + hundred_length + and_length + umap[((last_two_digits / 10) * 10)].size() + umap[(last_two_digits % 10)].size();
		return umap[(num/100)].size() + hundred_length + and_length + umap[((last_two_digits / 10) * 10)].size() + umap[(last_two_digits % 10)].size();
	} else {
		cout <<"One Thousand\t" << num << "\t" << umap[1].size() + thousand_length;
		return umap[1].size() + thousand_length;
	}
}

int main() {
	unordered_map<int, string> num_string_map;
	initialize_map(num_string_map);
	
	int res = 0;
	
	for(int i = 1; i<=1000; i++) {
		res += get_length(num_string_map, i);
		cout << "\t" << res<< endl;
	}
	
	cout<< res<< endl;
}

