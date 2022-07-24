#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(/*array<String^>^ arg*/)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project2::MyForm form;
	Application::Run(%form);
}

Creator::Creator()
{
}

Creator::~Creator()
{
}

int Creator::BinaryCreated(int num)
{
	int  binary = 0, remainder, product = 1;;
		while (num != 0) {
			remainder = num % 2;
			binary = binary + (remainder * product);
			num = num / 2;
			product *= 10;
		}
		return binary;
		std::cout << std::endl << "The number in the binary form is: " << binary;
	
}



void Creator::Read_In_File(std::string line)
{
	String^ filename = msclr::interop::marshal_as<String^>(line);
	std::ofstream outfile;
	outfile.open("Test.txt");
	String^ data;
	System::IO::StreamReader^ sr = System::IO::File::OpenText(filename);
	if (outfile.is_open())
	{
		while ((data = sr->ReadLine()) != nullptr)
		{
			convertdata = msclr::interop::marshal_as<std::string>(data);
			std::cout << convertdata << "\n";
			if (numline_abs == 1)
			{
				borders_num = std::stoi(convertdata);
			}
			if (numline_abs <= 5)
			{
				if (numline_abs == 5)
				{
					count--;
					mBorders = std::stoi(convertdata);
					outfile << convertdata << std::endl;
				}
				else
				{
					outfile << convertdata << std::endl;
				}
				Binary_data_top.push_back(std::to_string(BinaryCreated(std::stoi(convertdata)))+"0000");
			}
			else
			{
				if (numline_abs == 6)
				{
					outfile << convertdata << std::endl;
					previousNum = convertdata;
					Binary_data_top.push_back(std::to_string(BinaryCreated(std::stoi(convertdata))) + "0000");
				}
				if (numBorders <= mBorders)
				{
					if (count_bourders <= borders_num)
					{
						if (previousNum == convertdata)
						{
							count++;
							previousNum = convertdata;
						}
						else if (previousNum != convertdata)
						{
							v.push_back(count);
							outfile << count << std::endl;
							count = 1;
							previousNum = convertdata;
							lastnum = convertdata;
							numQ++;
						}
						if (count_bourders == borders_num)
						{
							count_bourders = 0;
							numBorders++;
						}
						count_bourders++;
					}
				}
				else
				{
					if (a == 1)
					{
						outfile << lastnum << std::endl;
						d.push_back(std::stoi(lastnum));
						a = 0;
					}
					d.push_back(std::stoi(convertdata));
					outfile << convertdata << std::endl;
				}
			}
			numline_abs++;
		}
	}
	else
	{
		std::cout << "*******************************";
	}
	for (int i = 0; i < static_cast<int>(v.size()); i++)
	{
		vv.push_back(v[i]);
	}
	for (int i = 0; i < static_cast<int>(d.size()); i++)
	{
		dd.push_back(d[i]);
	}
	for (int i = 2; i < d.size(); i++)
	{
		ddd.push_back(d[i]);
		std::cout << "index: " << i << " of size: " << d.size() << std::endl;
	}
	std::cout << "mid: " << vv.size() << " down: " << dd.size() << std::endl;
}

int SearchChains(std::vector<int> &vec_index_skip,std::vector<int> &vec,int instance,int instance_last, std::vector<int> vec_to_search,int ves, bool last_to_create,bool created)
{

	std::string ggf;
	
	bool cheker = false;
	int iios = 0;
	
	std::vector<int> h_skip;
	int startindex = 0;
	int index_to_skip;
	//bool created;

	
	if (created == true)
	{
		std::cout << "************created: true****************** " << created << "\n";
		for (int i = 0; i < vec_index_skip.size(); i++)
		{
			h_skip.push_back(vec_index_skip[i]);
		}

		
		std::sort(h_skip.begin(), h_skip.end());
		for (int i = 0; i < h_skip.size(); i++)
		{
			if (h_skip[i] != iios)
			{
				startindex = iios;
			}
			else if (h_skip.size() == 0) { startindex = 0; }
			else {}
			iios++;
		}
	}
	else
	{
		created == false;
		std::cout << "created: false" << created;
	}
	for (int i = 0; i < ves; i++)
	{
		ggf = ggf + std::to_string(vec[i + startindex]);
		std::cout << "ggf: " << ggf<<std::endl;
		//Sleep(200);
	}
	
	if (vec_to_search.size() == 0)
	{
		for (int i = 0; i < ves; i++)
		{
			vec_to_search.push_back(vec[i + startindex]);
		}
	}

	for (int i = 0+startindex; i < vec.size(); i = i + 1)
	{
		if (i + ves < vec.size())
		{
			std::string ggf2;
			std::cout << "i: " << i << " instance: " << instance << std::endl;
			//Sleep(200);
			for (int ssw = 0; ssw < vec_to_search.size(); ssw++)
			{
				std::cout << "ssw: " << ssw << " vec_ro_search: " << vec_to_search.size() << std::endl;

				for (int sss = 0; sss < vec_to_search.size(); sss++)
				{
					//std::cout << "gff2: " << ggf2 << "vec_to_search: " << vec_to_search.size() << std::endl;
					ggf2 = ggf2 + std::to_string(vec[i + sss]);
					std::cout << "gff2: " <<ggf<<" : " << ggf2 << " vec_to_search: " << vec_to_search.size() << std::endl;
				}

				//std::cout << "gff2: " << ggf2 << std::endl;

				std::cout << "ssw: " << ssw << " vec_to_search: " << vec_to_search.size() << std::endl;
				//Sleep(200);
				for (int index_se = 0; index_se < h_skip.size(); index_se++)
				{

					std::cout << "index_se: " << index_se << std::endl;
					//Sleep(200);
					if (h_skip.size() == 0)
					{
						index_to_skip = 0;
						std::cout << "index_to_skip(1): " << index_to_skip << std::endl;
						//Sleep(200);
					}
					else
					{
						index_to_skip = h_skip[index_se];
						std::cout << "index_to_skip(2): " << index_to_skip << std::endl;
						//Sleep(200);
					}

					if ((i + ssw) == index_to_skip)
					{
						cheker = false;
						index_se = vec_index_skip.size() + 1;
						std::cout << "cheker: " << cheker << std::endl;
						//Sleep(200);
						std::cout << "index_se: " << index_se << std::endl;
						//Sleep(200);
					}
					else
					{
						cheker = true;
					}
					std::cout << "cheker: " << cheker << std::endl;
					//Sleep(200);

				}
				if (cheker == true)
				{
					ggf2 = ggf2 + std::to_string(vec[i + ssw]);
					cheker = false;
				}
				else if (cheker == false)
				{
					//ggf.clear();

					ssw = vec_to_search.size();
				}

			}
			if (ggf == ggf2 && last_to_create == false)
			{
				instance++;
				std::cout << "ggf == ggf2(1): " << instance << std::endl;
				std::cout << "ggf == ggf2(1): " << ggf << " : " << ggf2 << std::endl;
				ggf2.clear();
				std::cout << "ggf == ggf2(1/1): " << ggf << " : " << ggf2 << std::endl;
				//Sleep(200);
			}
			else if (ggf == ggf2 && last_to_create == true)
			{
				instance++;
				std::cout << "ggf == ggf2(2): " << instance << std::endl;
				std::cout << "ggf == ggf2(2): " << ggf << " : " << ggf2 << std::endl;
				ggf2.clear();
				
			}
			else
			{
				//ggf.clear();
			}
		}

	}

	if (created == true)
	{
		ves = 1;
		instance = 0;
		instance_last = 0;
		
		for (int iosssw = 0; iosssw < ves; iosssw++)
		{
			vec_index_skip.push_back(iosssw+startindex);
			//std::cout << "ggf == ggf2(2): " << iosssw << std::endl;
			//Sleep(200);
		}
		std::cout << "Skip: ";
		for (int i = 0; i < vec_index_skip.size(); i++)
		{
			std::cout << " " << i;
		}

		created = false;
		SearchChains(vec_index_skip, vec, 0, instance_last, vec_to_search, ves, false, false);
	}
		if (instance == 1 && instance_last >= instance&&ves>=1&&created == false)
		{
			std::cout << "instance(1): " << instance << " instance_last "<< instance_last << std::endl;
			//Sleep(200);
			ves = ves - 1;
			last_to_create = true;
			vec_to_search.clear();
			SearchChains(vec_index_skip, vec, 0,instance_last, vec_to_search,ves,last_to_create,last_to_create);
		}
		else
		{
			std::cout << "instance(2): " << instance << " instance_last " << instance_last << std::endl;
			//Sleep(200);
			vec_to_search.clear();
			last_to_create = false;
			ves = ves + 1;
			std::cout << "ves: " << ves << std::endl;
			instance_last = instance;
			SearchChains(vec_index_skip, vec, 0, instance_last, vec_to_search, ves, last_to_create,last_to_create);
		}
		return 0;
};

void Creator::Chains_Down()
{
	int inst;
	int ves;
	int _indexes;
	std::vector<int> vector_send;
	std::vector<int> vector_searcher;
	std::vector<int> vector_helper;
	std::cout << "chains start: " << std::endl;
	//Sleep(200);
	
	for (int ss = 0; ss < ddd.size(); ss++)
	{
		vector_send.push_back(ddd[ss]);
	}
	std::cout << "chains end: " << std::endl;

	SearchChains(vector_helper, vector_send, 0, 0, vector_searcher, 1,false,false);
}

void Creator::Sorted_base(std::vector<int> k)
{
	//Сортировка общего массива файла
	std::sort(k.begin(), k.end());
	
	//Добавление 0 для отладки и рассчета
	k.push_back(0);

	//посчет количества к знаку
	for (int i = 0; i < k.size() - 1; i++)
	{
		int _first = static_cast<int>(k[i]);
		int _second;
		if (static_cast<int>(k[i + 1]) != 0 && stopper == true)
		{
			_second = static_cast<int>(k[i + 1]);

		}
		else
		{
			_second = static_cast<int>(k[i]);
			stopper = false;
		}

		if (_first == _second && stopper == true)
		{
			num_++;
			if (stopper == false)
			{
				num_ = num_ - 1;
				std::cout << "Vector num: " << k[i] << std::endl;
				std::cout << "How many: " << num_ << std::endl;
				_num_podschet_1.push_back(_first);
				_num_podschet_2.push_back(num_);
			}
		}
		else
		{
			std::cout << "Vector num: " << k[i] << std::endl;
			_num_podschet_1.push_back(_first);
			std::cout << "How many: " << num_ << std::endl;
			_num_podschet_2.push_back(num_);
			num_ = 1;
		}
	}
	stopper = true;

	// Сортировка по количеству
	for (int startIndex = 0; startIndex < static_cast<int>(_num_podschet_2.size()) - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < static_cast<int>(_num_podschet_2.size()); ++currentIndex)
		{
			if (_num_podschet_2[currentIndex] > _num_podschet_2[smallestIndex])
				smallestIndex = currentIndex;
		}

		std::swap(_num_podschet_2[startIndex], _num_podschet_2[smallestIndex]);
		std::swap(_num_podschet_1[startIndex], _num_podschet_1[smallestIndex]);
	}
	
}

void Creator::create_Vocabulary(std::vector<std::string> vocabularys, std::vector<int> originalText, std::vector<std::string> &translated_text)
{
	//VOCABULARY - Start
	int testing = 0;
	//кодировка и словарь
	for (int u = 0; u < static_cast<int>(_num_podschet_1.size()*3); u=u+3)
	{
		if (u == 0)
		{
			vocabularys.push_back(std::to_string(_num_podschet_1[testing]));
			vocabularys.push_back(std::to_string(BinaryCreated(_num_podschet_1[testing]))+"0000");
			vocabularys.push_back(zero1);
			_characterNum++;
		}
		else
		{
			for (int s = 0; s < _characterNum; s++)
			{
				_data_binary_voc = _data_binary_voc + one;
			}
			_data_binary_voc = _data_binary_voc + zero1;
			vocabularys.push_back(std::to_string(_num_podschet_1[testing]));
			vocabularys.push_back(std::to_string(BinaryCreated(_num_podschet_1[testing]))+"0000");
			vocabularys.push_back(_data_binary_voc);
			
			_characterNum++;
		}
		testing++;
		_data_binary_voc = "1";
		std::cout << "num_podschet: " << vocabularys[u] << " == " << "vocabulary: " << vocabularys[u + 1] <<
			" == " << "binary: " << vocabularys[u + 2] << " Size: "<< vocabularys.size() << std::endl;
	}
	testing = 0;
	_characterNum = -1;

	//VOCABULARY - End

	//Перевод текста
	for (int uss = 0; uss < originalText.size(); uss++)
	{
		//std::cout << "Original text" << originalText.size() << "Vocabulary: " << vocabularys.size() << std::endl;
		//numerical_env = static_cast<int>(j[uss]);
		for (int iis = 0; iis < vocabularys.size(); iis++)
		{

			//std::cout << "=" << iis << " " << std::endl;
			if (originalText[uss] == std::stoi(vocabularys[iis]))
			{
				//std::cout << "Original text   3" << std::endl;
				translated_text.push_back(vocabularys[iis + 2]);
				std::cout << "translate: " << translated_text[uss]<<std::endl;
			}
		}
	}
	
	_num_podschet_1.clear();
	_num_podschet_2.clear();
}

void Creator::translater(std::vector<int> originalText, std::vector<std::string> vocabularys, std::vector<std::string> translated_text)
{
	
	
}

int binaryToDecimal(std::string n)
{
	std::string num = n;

	// Stores the decimal value
	int dec_value = 0;

	// Initializing base value to 1
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {

		// If the current bit is 1
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	// Return answer
	return dec_value;
}

std::string setStringtoASCII(std::string &str)
{
	// To store size of s
	int N = int(str.size());

	// If given string is not a
	// valid string
	if (N % 8 != 0) {
		str = str + "0";
		setStringtoASCII(str);
			
		//return "Not Possible!";
	}

	// To store final answer
	std::string res = "";

	// Loop to iterate through string
	for (int i = 0; i < N; i += 8) {
		int decimal_value
			= binaryToDecimal((str.substr(i, 8)));

		// Apprend the ASCII character
		// equivalent to current value
		res += char(decimal_value);
	}

	// Return Answer
	return res;
}

void Creator::Create_binaryFile(std::vector<std::string> Binary_mid, std::vector<std::string> Binary_down)
{
	for (int i = 0; i < static_cast<int>(Binary_data_top.size()); i++)
	{
		Binary_data_All_In.push_back(Binary_data_top[i]);
	}

	for (int i = 0; i < static_cast<int>(Binary_mid.size()); i++)
	{
		Binary_data_All_In.push_back(Binary_mid[i]);
	}
	std::cout << std::endl;

	for (int i = 0; i < static_cast<int>(Binary_down.size()); i++)
	{
		Binary_data_All_In.push_back(Binary_down[i]);
	}
	std::cout << std::endl;

	std::cout << std::endl;
	for (int i; i < static_cast<int>(Binary_data_All_In.size()); i++)
	{

		lastLineToCreateBinaryFile = lastLineToCreateBinaryFile + Binary_data_All_In[i];
		std::cout << lastLineToCreateBinaryFile << " - " << Binary_data_All_In[i] << std::endl;
	}

	std::cout << "TOP: " << Binary_data_top.size() << " MID: " << Binary_mid.size()
		<< " DOW: " << Binary_down.size() << std::endl;

	std::cout << lastLineToCreateBinaryFile.length() << std::endl;
	std::ofstream K("CD-1.cd1", std::ofstream::binary);
	std::cout << "Converted to: " << setStringtoASCII(lastLineToCreateBinaryFile) << std::endl;
	//for (int i = 0; i < lastLineToCreateBinaryFile.length(); i=i+8)
	//{
	K << setStringtoASCII(lastLineToCreateBinaryFile);
	//}
	//K.write(reinterpret_cast<const char*>(&lastLineToCreateBinaryFile), lastLineToCreateBinaryFile.length());
};