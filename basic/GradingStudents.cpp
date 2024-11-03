vector<int> gradingStudents(vector<int> grades) {
vector<int> finalgrades;
for(int i = 0; i<grades.size(); i++){
     if((grades[i]%5 != 0)&& ((5 - (grades[i]%5)) <3) && (grades[i]>=38)){
         finalgrades.push_back(grades[i] + (5 - (grades[i]%5)));
        }
    else{
          finalgrades.push_back(grades[i]);
        }
    }
    return finalgrades;
}
