#include<iostream>
#include<map>
using namespace std;

void map_init(map<string,int> &m) {
	m["a"] = 1;
	m["b"] = 2;
	m["c"] = 3;
	m["d"] = 4;
	m["e"] = 5;

	cout<<"-----------------------"<<endl;
	cout<<m.size()<<endl;
	cout<<"-----------------------"<<endl;
	for(map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
		cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
	}

	m.clear();

	m["a"] = 10;
        m["b"] = 20;
        m["c"] = 30;
        m["d"] = 40;

	cout<<"-----------------------"<<endl;
	cout<<m.size()<<endl;
	cout<<"-----------------------"<<endl;
        for(map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

}


void map_ops() {
	map<string,int> m;
	map_init(m);
	map<string,int>::iterator it;

	cout<<"-----------------------"<<endl;
	cout<<m.size()<<endl;
	cout<<"-----------------------"<<endl;
        for(it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

	it = m.find("c");
	cout<<"-----------------------"<<endl;
	cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
	
	m.erase(it);
	cout<<"-----------------------"<<endl;
        for(it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }
	
	it = m.find("b");
	m.erase(it,m.end());
	cout<<"-----------------------"<<endl;
        for(it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

	m.insert(pair<string,int>("x", 100));
	m.insert(pair<string,int>("y", 200));
	m.insert(pair<string,int>("z", 300));

	map<string,int> n;
	n.insert(m.begin(), m.find("z"));

	cout<<"-----------------------"<<endl;
        for(it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

	cout<<"-----------------------"<<endl;
        for(it = n.begin(); it != n.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

	n["a"] = 1000;
	n["m"] = 1500;
	n["n"] = 1600; 
	n["x"] = 2000;
	n["y"] = 3000;

	m.insert(n.begin(),n.find("y"));
	cout<<"-----------------------"<<endl;
        for(it = m.begin(); it != m.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }

	cout<<"-----------------------"<<endl;
        for(it = n.begin(); it != n.end(); it++) {
                cout<<"key:"<<it->first<<" value:"<<it->second<<endl;
        }


}



