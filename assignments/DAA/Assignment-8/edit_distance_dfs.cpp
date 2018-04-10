/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithms
 */
#include <bits/stdc++.h> 

using namespace std;

class node {
  public:
    string s;
  int height;
  int pointer;
  node() {
    height = 0;
    pointer = 0;
  }

};

class val {
  public:
    int type;
  string s;
  bool vis;
  val() {
    type = -1;
    vis = false;
  }
};

node del(node p) {
  node q;
  int l, i;
  l = p.s.size();
  i = 0;
  while (i < l) {
    if (i != p.pointer) {
      q.s.push_back(p.s[i]);
    }
    i++;
  }
  if (p.pointer == 0)
    q.pointer = p.pointer;
  else
    q.pointer = p.pointer - 1;
  q.height = p.height + 1;
  return q;
}

int dfsedit(string so, string st, map < string, val > m) {
  if (so == st) return 0;

  if (so.size() == 0) return st.size();
  stack < node > q;
  node sn;
  string num;
  sn.s = so;
  cout << "in loop\n";
  q.push(sn);
  set < string > ch;
  int i, k, l;
  i = 0;
  string c;
  l = st.size();
  for (i = 0; i < l; i++) {
    c = st[i];
    ch.insert(c);
  }
  int sze = ch.size();
  val v;
  set < string > ::iterator it;
  k = so.size();
  so.push_back('0');

  m.insert(map < string, val > ::value_type(so, v));
  so.pop_back();

  node x, temp, y;
  //cout<<" front "<<q.front().s<<endl;
  while (q.top().s != st) {
    x = q.top();
    //cout<<"x= "<<x.s<<endl;
    q.pop();
    temp.s = x.s;

    temp.pointer = x.pointer + 1;
    temp.height = x.height + 1; {
      //m[temp.s].vis=true;
      for (it = ch.begin(); it != ch.end(); it++) {
        temp.s.insert(0, * it);
        //cout<<"temp "<<temp.s<<" "<<temp.height<<endl;
        v.type = 0;
        v.s = * it;

        {
          q.push(temp);
        }
        temp.s.erase(temp.s.begin());
      } 

      v.type = 1;

      //cout<<"temp "<<temp.s<<" "<<temp.height<<endl;
      //if(m[temp.s])
      //m.insert(map<string,val>:: value_type(temp.s,v));
      q.push(temp);
      v.type = 2;
      v.s = temp.s[temp.pointer];
      temp = del(x);
      q.push(temp);
      //cout<<"temp "<<temp.s<<" "<<temp.height<<endl;
      //m.insert(map<string,val>:: value_type(temp.s,v));
    }
  }
  return q.top().height;
}

int dfspath(string s, string t, stack < pair < int, char > > st) {
  int point = 0;
  int count = 0;
  string sr;
  while (!st.empty()) {

    if (st.top().first == 0) {
      sr.push_back(st.top().second);
      s.insert(0, sr);
      point++;
      cout << s << endl;
      sr.erase(sr.begin());
    } else if (st.top().first == 1) {
      point++;
      cout << s << endl;
    } else {
      s.erase(s.begin() + point);
      cout << s << endl;
    }
    count++;
    st.pop();
  }
  return count;
}

void path(string s, string t, stack < pair < int, char > > & st) {
  int ls = s.length() - 1;
  int ts = t.length() - 1;
  int i = ls;
  int j = ts;

  while (!st.empty()) {
    st.pop();
  }
  while (s[i] == t[j] && (i >= 0 && j >= 0)) {
    i--;
    j--;
  }
  if (i < 0 && j < 0) {
    return;
  }
  if (i >= 0 && j < 0) {
    while (i >= 0) {
      st.push(make_pair(2, '0')); // 2 is for delete
      i--;
    }
  }
  if (i < 0 && j >= 0) {
    while (j >= 0) {
      st.push(make_pair(0, t[j])); // 0 is for the front insert
      j--;
    }
  }
  if (i >= 0 && j >= 0) {
    while (i >= 0 && j >= 0) {
      if (s[i] == t[j]) {
        st.push(make_pair(1, '0'));
        i--;
        j--;
      } else if (s[i] != t[j]) {
        {
          while (s[i] != t[j] && (i >= 0)) {
            st.push(make_pair(2, '0')); // 1 is for the move
            i--;
          }
        }
        if (i < 0) {
          break;
        } else {
          st.push(make_pair(1, '0'));
          j = j - 1;
          i--;
        }
      }
    }
  }
  if (i < 0 && j >= 0) {
    while (j >= 0) {
      st.push(make_pair(0, t[j]));
      j--;
    }
  } else if (i >= 0 && j < 0) {
    while (i >= 0) {
      st.push(make_pair(2, '0'));
      i--;
    }
  }
  return;
}

int main() {
  node st, pt;
  string str;
  map < string, val > m;
  string temp;
  stack < pair < int, char > > sp;
  int count;
  while (1) {

    m.clear();
    cin >> str;

    cin >> temp;

    //cout<<dfsedit(str,temp,m)<<endl;
    path(str, temp, sp);
    cout << "Path: " << endl;
    count = dfspath(str, temp, sp);
    cout << endl;
    cout << "Steps: " << count << endl;
    cout << endl;
  }
  return 0;
}