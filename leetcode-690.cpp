/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int res=0;
        Employee* tmp;
        for(int i=0;i<employees.size();i++)
        {
            if(employees[i]->id==id)
            {
                tmp=employees[i];
                res+=tmp->importance;
            }
        }
        stack<int> s;
        vector<int> vec=tmp->subordinates;
        for(int i=0;i<vec.size();i++)
            s.push(vec[i]);
        while(!s.empty())
        {
            int curid=s.top();
            s.pop();
            res+=getImportance(employees, curid);
        }
        return res;
    }

};
