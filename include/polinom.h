#ifndef _POLINOM_H_
#define _POLINOM_H_
#include "monom.h"

class Polinom : public Monom
{
	Monom *head;
public:
	Polinom();
	~Polinom();
	Polinom(const Polinom &p);
	void Clean();
	void AddMonom(int coeff, int deg); 
	void Parser(string s);
	Polinom& operator+(const Polinom &p) const;
	Polinom& operator-(const Polinom &p) const;
	Polinom& operator*(const Polinom &p) const;
	Polinom& operator=(const Polinom &p);
	bool operator==(const Polinom &p) const;
	Monom* GetHead();

	friend istream& operator>>(istream &in, Polinom &p)
	{
		string input, monom;
		int deg_ = 0, coef_ = 0, i = 0;
		Polinom tmp;
			setlocale(LC_ALL, "Russian");
			cout << "Enter the polinom: ";
			in>>input;

			while (!input.empty())
			{
				if (input[0] == '-')
				{
					i = 1;
					monom = "-";
					while ((input[i] != '\0'))
					{
						if (input[i] == '+') break;
						if (input[i] == '-') break;
						monom += input[i];
						i++;
					}
					p.Parser(monom);
					int pos = input.find(monom);
					input.erase(pos, monom.size());
					monom.clear();
				}
				else if (input[0] == '+')
				{
					i = 1;
					monom = "+";
					while ((input[i] != '\0'))
					{
						if (input[i] == '+') break;
						if (input[i] == '-') break;
						monom += input[i];
						i++;
					}
					p.Parser( monom); 
					int pos = input.find(monom);
					input.erase(pos, monom.size());
					monom.clear();
				}
				else
				{
					while ((input[i] != '\0'))
					{
						if (input[i] == '+') break;
						if (input[i] == '-') break;
						monom += input[i];
						i++;
					}
					p.Parser( monom);
					int pos = input.find(monom);
					input.erase(pos, monom.size());
					monom.clear();
				}
			}

	
		return in;
	}

	friend ostream& operator<<(ostream &out, const Polinom &p)
	{
		Polinom q(p);
		Monom *t = q.head;
		if (t==NULL)
		{
			out<<t->GetCoeff();
			return out;
		}
		if (t->GetNext()==NULL)
		{
			if (t->GetCoeff()==0)
			{
				out<<t->GetCoeff();
				return out;
			}
			else if (t->GetDegree()==0) out<<t->GetCoeff();
				 else 
				 {
					if((t->GetCoeff()) ==-1 )	out << "-";
					else if ((t->GetCoeff()) != 1)	out << t->GetCoeff();

					if ((t->GetDegree() / 100) == 1) out << "x";
					else if (t->GetDegree() / 100) out << "x^" << t->GetDegree() / 100; 
				
					if (((t->GetDegree() / 10) % 10) == 1) out << "y";
					else if ((t->GetDegree() / 10) % 10) out << "y^" << (t->GetDegree() / 10) % 10;

					if (t->GetDegree() % 10 == 1) out;
					else if (t->GetDegree() % 10) out << "z^" << t->GetDegree() % 10;
				 }
			return out;
		}
		while (t->GetNext()!=NULL)
		{
			if (t->GetCoeff()==0) t=t->GetNext();
			else if (t->GetDegree()==0) 
			{
				if (t->GetCoeff() > 0) out << t->GetCoeff();
				else out << t->GetCoeff();		
				t=t->GetNext();
				if (t->GetCoeff() > 0) out << "+"; //////
			}
			else
			{
				if ((t->GetCoeff()) == -1)	out << "-";
				else if ((t->GetCoeff()) != 1)	out<<t->GetCoeff();

				if ((t->GetDegree() / 100) == 1) out << "x";
				else if (t->GetDegree() / 100) out << "x^" << t->GetDegree() / 100;

				if (((t->GetDegree() / 10) % 10) == 1) out << "y";
				else if ((t->GetDegree() / 10) % 10) out << "y^" << (t->GetDegree() / 10) % 10;

				if (t->GetDegree() % 10 == 1) out << "z" ;
				else if (t->GetDegree() % 10) out << "z^" << t->GetDegree() % 10 ;

				t=t->GetNext();
				if (t->GetCoeff() > 0) out << "+"; //////
			}
		}
		if (t->GetCoeff()==0) return out;
		else if (t->GetDegree()==0) out<<t->GetCoeff();
			 else {
			 	 if ((t->GetCoeff()) == -1)	out << "-";
				 else if ((t->GetCoeff()) != 1)	out << t->GetCoeff();

	 			 if ((t->GetDegree() / 100) == 1) out << "x";
				 else if (t->GetDegree() / 100) out << "x^" << t->GetDegree() / 100;

				if (((t->GetDegree() / 10) % 10) == 1) out << "y";
				else if ((t->GetDegree() / 10) % 10) out << "y^" << (t->GetDegree() / 10) % 10;

				if (t->GetDegree() % 10 == 1) out << "z";
				else if (t->GetDegree() % 10) out << "z^" << t->GetDegree() % 10;

				if (t->GetCoeff() > 0) out << "+"; //////
		}
	return out;
	}

};

#endif // !_POLINOM_H_#