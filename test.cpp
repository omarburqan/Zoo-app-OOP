#include "test.h"

#include "mamal.h"
#include "animal.h"
#include "bird.h"
#include "fish.h"

using std::cout;
using std::endl;

void test(){
	/*
		Mamal(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,
			size_t &pregnancy_duration, size_t &young_born);*/
	/* 
		Fish(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &lowest_depth);
	*/
	/*
		Bird(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &typical_height,size_t &wing_span);
	*/
			
	String a("aa"); 
	String b("bb");
	String c("cc");
	String d("dd");
	String e("e");
	size_t  f = 5;
	size_t  g = 6;
	size_t  h = 7;
	
	Mamal mm(a,b,c,d,e,f,g,h);
	Fish fsh(a,b,c,d,e,f,g);
	Bird bd(a,b,c,d,e,f,g,h);
	cout << mm;
	cout << fsh;
	cout << bd;

	
}

