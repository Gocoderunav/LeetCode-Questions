class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       set<string> res;
      for(string email: emails) {
            string local_name = email.substr(0, email.find('@'));
            local_name = local_name.substr(0, email.find('+'));
            local_name = regex_replace(local_name, regex("\\."), "");
            string domain_name = email.substr(email.find('@') + 1, email.length());
            email = local_name + '@' + domain_name;
            res.insert(email);
        }
       return res.size();
    }
};