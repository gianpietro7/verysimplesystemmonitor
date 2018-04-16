class Ram
{
	int get_total(){
		ifstream infile("/proc/meminfo");
		int  x;
		int count;
		bool word=false;
		while(count<2){
			if(word){
			infile>>x;
			}
			word=true;
			count++;
		}
		return x;
	}

	int get_used(){
		int memtotal=get_total();
		int count;
		int mem;
		while(count<5){
			infile>>x;
			if(count==4){
				infile>>x;
				return memtotal-x;
			}
			count++;
		}
	}
	int get_used_percent(){
		return get_used/100;
	}
};
