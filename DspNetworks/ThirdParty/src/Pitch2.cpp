/* ------------------------------------------------------------
name: "elysiera"
version: "1.0"
Code generated with Faust 2.81.2 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _Pitch2 -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___Pitch2_H__
#define  ___Pitch2_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _Pitch2
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

struct _Pitch2SIG0 {
	int iVec2[2];
	int iRec12[2];
	
	int getNumInputs_Pitch2SIG0() {
		return 0;
	}
	int getNumOutputs_Pitch2SIG0() {
		return 1;
	}
	
	void instanceInit_Pitch2SIG0(int sample_rate) {
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iVec2[l4] = 0;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			iRec12[l5] = 0;
		}
	}
	
	void fill_Pitch2SIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			iVec2[0] = 1;
			iRec12[0] = (iVec2[1] + iRec12[1]) % 65536;
			table[i1] = std::cos(9.58738e-05f * float(iRec12[0]));
			iVec2[1] = iVec2[0];
			iRec12[1] = iRec12[0];
		}
	}

};

static _Pitch2SIG0* new_Pitch2SIG0() { return (_Pitch2SIG0*)new _Pitch2SIG0(); }
static void delete_Pitch2SIG0(_Pitch2SIG0* dsp) { delete dsp; }

struct _Pitch2SIG1 {
	int iVec3[2];
	int iRec23[2];
	
	int getNumInputs_Pitch2SIG1() {
		return 0;
	}
	int getNumOutputs_Pitch2SIG1() {
		return 1;
	}
	
	void instanceInit_Pitch2SIG1(int sample_rate) {
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			iVec3[l13] = 0;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			iRec23[l14] = 0;
		}
	}
	
	void fill_Pitch2SIG1(int count, float* table) {
		for (int i2 = 0; i2 < count; i2 = i2 + 1) {
			iVec3[0] = 1;
			iRec23[0] = (iVec3[1] + iRec23[1]) % 65536;
			table[i2] = std::sin(9.58738e-05f * float(iRec23[0]));
			iVec3[1] = iVec3[0];
			iRec23[1] = iRec23[0];
		}
	}

};

static _Pitch2SIG1* new_Pitch2SIG1() { return (_Pitch2SIG1*)new _Pitch2SIG1(); }
static void delete_Pitch2SIG1(_Pitch2SIG1* dsp) { delete dsp; }

static float _Pitch2_faustpower2_f(float value) {
	return value * value;
}
static float ftbl0_Pitch2SIG0[65536];
static float ftbl1_Pitch2SIG1[65536];

struct _Pitch2 final : public ::faust::dsp {
	
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	int iVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fVslider3;
	float fConst3;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fConst4;
	FAUSTFLOAT fVslider6;
	float fRec11[2];
	float fRec10[2];
	int IOTA0;
	float fVec1[32768];
	float fConst5;
	int iConst6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst7;
	FAUSTFLOAT fVslider9;
	float fRec13[2];
	FAUSTFLOAT fVslider10;
	float fRec14[2];
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	float fRec16[2];
	float fRec17[2];
	FAUSTFLOAT fVslider14;
	float fConst8;
	FAUSTFLOAT fVslider15;
	FAUSTFLOAT fVslider16;
	FAUSTFLOAT fVslider17;
	float fRec19[2];
	float fRec20[2];
	float fRec15[1048576];
	FAUSTFLOAT fVslider18;
	FAUSTFLOAT fVslider19;
	float fRec24[2];
	FAUSTFLOAT fVslider20;
	FAUSTFLOAT fVslider21;
	float fRec25[2];
	float fVec4[16384];
	float fConst9;
	FAUSTFLOAT fVslider22;
	float fVec5[2048];
	int iConst10;
	float fRec8[2];
	float fConst11;
	float fConst12;
	float fRec29[2];
	float fRec28[2];
	float fVec6[32768];
	float fConst13;
	int iConst14;
	float fVec7[4096];
	int iConst15;
	float fRec26[2];
	float fConst16;
	float fConst17;
	float fRec33[2];
	float fRec32[2];
	float fVec8[16384];
	float fConst18;
	int iConst19;
	float fVec9[4096];
	int iConst20;
	float fRec30[2];
	float fConst21;
	float fConst22;
	float fRec37[2];
	float fRec36[2];
	float fVec10[32768];
	float fConst23;
	int iConst24;
	float fVec11[4096];
	int iConst25;
	float fRec34[2];
	float fConst26;
	float fConst27;
	float fRec41[2];
	float fRec40[2];
	float fVec12[16384];
	float fConst28;
	int iConst29;
	float fRec43[2];
	float fRec44[2];
	float fRec46[2];
	float fRec47[2];
	float fRec42[1048576];
	float fVec13[16384];
	float fVec14[2048];
	int iConst30;
	float fRec38[2];
	float fConst31;
	float fConst32;
	float fRec53[2];
	float fRec52[2];
	float fVec15[16384];
	float fConst33;
	int iConst34;
	float fVec16[4096];
	int iConst35;
	float fRec50[2];
	float fConst36;
	float fConst37;
	float fRec57[2];
	float fRec56[2];
	float fVec17[16384];
	float fConst38;
	int iConst39;
	float fVec18[2048];
	int iConst40;
	float fRec54[2];
	float fConst41;
	float fConst42;
	float fRec61[2];
	float fRec60[2];
	float fVec19[16384];
	float fConst43;
	int iConst44;
	float fVec20[2048];
	int iConst45;
	float fRec58[2];
	float fRec0[3];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	
	_Pitch2() {
	}
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _Pitch2 -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.2.0");
		m->declare("filename", "Pitch2.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.7.1");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.1");
		m->declare("misceffects.lib/dryWetMixerConstantPower:author", "David Braun, revised by Stéphane Letz");
		m->declare("misceffects.lib/echo:author", "Romain Michon");
		m->declare("misceffects.lib/name", "Misc Effects Library");
		m->declare("misceffects.lib/version", "2.5.1");
		m->declare("name", "elysiera");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "1.6.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "1.4.0");
		m->declare("routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "1.0");
	}

	static constexpr int getStaticNumInputs() {
		return 2;
	}
	static constexpr int getStaticNumOutputs() {
		return 2;
	}
	int getNumInputs() {
		return 2;
	}
	int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
		_Pitch2SIG0* sig0 = new_Pitch2SIG0();
		sig0->instanceInit_Pitch2SIG0(sample_rate);
		sig0->fill_Pitch2SIG0(65536, ftbl0_Pitch2SIG0);
		_Pitch2SIG1* sig1 = new_Pitch2SIG1();
		sig1->instanceInit_Pitch2SIG1(sample_rate);
		sig1->fill_Pitch2SIG1(65536, ftbl1_Pitch2SIG1);
		delete_Pitch2SIG0(sig0);
		delete_Pitch2SIG1(sig1);
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::floor(0.219991f * fConst0 + 0.5f);
		fConst2 = 6.9077554f * (fConst1 / fConst0);
		fConst3 = 6.2831855f / fConst0;
		fConst4 = 3.1415927f / fConst0;
		fConst5 = std::floor(0.019123f * fConst0 + 0.5f);
		iConst6 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst1 - fConst5)));
		fConst7 = 1.0f / fConst0;
		fConst8 = 5.0f * fConst0;
		fConst9 = 0.001f * fConst0;
		iConst10 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst5 + -1.0f)));
		fConst11 = std::floor(0.256891f * fConst0 + 0.5f);
		fConst12 = 6.9077554f * (fConst11 / fConst0);
		fConst13 = std::floor(0.027333f * fConst0 + 0.5f);
		iConst14 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst11 - fConst13)));
		iConst15 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst13 + -1.0f)));
		fConst16 = std::floor(0.192303f * fConst0 + 0.5f);
		fConst17 = 6.9077554f * (fConst16 / fConst0);
		fConst18 = std::floor(0.029291f * fConst0 + 0.5f);
		iConst19 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst16 - fConst18)));
		iConst20 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst18 + -1.0f)));
		fConst21 = std::floor(0.210389f * fConst0 + 0.5f);
		fConst22 = 6.9077554f * (fConst21 / fConst0);
		fConst23 = std::floor(0.024421f * fConst0 + 0.5f);
		iConst24 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst21 - fConst23)));
		iConst25 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst23 + -1.0f)));
		fConst26 = std::floor(0.125f * fConst0 + 0.5f);
		fConst27 = 6.9077554f * (fConst26 / fConst0);
		fConst28 = std::floor(0.013458f * fConst0 + 0.5f);
		iConst29 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst26 - fConst28)));
		iConst30 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst28 + -1.0f)));
		fConst31 = std::floor(0.127837f * fConst0 + 0.5f);
		fConst32 = 6.9077554f * (fConst31 / fConst0);
		fConst33 = std::floor(0.031604f * fConst0 + 0.5f);
		iConst34 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst31 - fConst33)));
		iConst35 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst33 + -1.0f)));
		fConst36 = std::floor(0.174713f * fConst0 + 0.5f);
		fConst37 = 6.9077554f * (fConst36 / fConst0);
		fConst38 = std::floor(0.022904f * fConst0 + 0.5f);
		iConst39 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst36 - fConst38)));
		iConst40 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst38 + -1.0f)));
		fConst41 = std::floor(0.153129f * fConst0 + 0.5f);
		fConst42 = 6.9077554f * (fConst41 / fConst0);
		fConst43 = std::floor(0.020346f * fConst0 + 0.5f);
		iConst44 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst41 - fConst43)));
		iConst45 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst43 + -1.0f)));
	}
	
	void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.5f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(4.68f);
		fVslider4 = FAUSTFLOAT(8.6e+03f);
		fVslider5 = FAUSTFLOAT(3.7f);
		fVslider6 = FAUSTFLOAT(4.4e+02f);
		fVslider7 = FAUSTFLOAT(0.6f);
		fVslider8 = FAUSTFLOAT(1.0f);
		fVslider9 = FAUSTFLOAT(3.1f);
		fVslider10 = FAUSTFLOAT(12.0f);
		fVslider11 = FAUSTFLOAT(1.8e+04f);
		fVslider12 = FAUSTFLOAT(0.71f);
		fVslider13 = FAUSTFLOAT(0.0f);
		fVslider14 = FAUSTFLOAT(0.5f);
		fVslider15 = FAUSTFLOAT(0.5f);
		fVslider16 = FAUSTFLOAT(2.5e+02f);
		fVslider17 = FAUSTFLOAT(0.71f);
		fVslider18 = FAUSTFLOAT(0.6f);
		fVslider19 = FAUSTFLOAT(5.0f);
		fVslider20 = FAUSTFLOAT(1.0f);
		fVslider21 = FAUSTFLOAT(3.1f);
		fVslider22 = FAUSTFLOAT(0.0f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec11[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec10[l2] = 0.0f;
		}
		IOTA0 = 0;
		for (int l3 = 0; l3 < 32768; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec13[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec14[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec16[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec17[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec19[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec20[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 1048576; l12 = l12 + 1) {
			fRec15[l12] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec24[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec25[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 16384; l17 = l17 + 1) {
			fVec4[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2048; l18 = l18 + 1) {
			fVec5[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec8[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec29[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec28[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 32768; l22 = l22 + 1) {
			fVec6[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 4096; l23 = l23 + 1) {
			fVec7[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec26[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec33[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec32[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 16384; l27 = l27 + 1) {
			fVec8[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 4096; l28 = l28 + 1) {
			fVec9[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec30[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec37[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec36[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 32768; l32 = l32 + 1) {
			fVec10[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 4096; l33 = l33 + 1) {
			fVec11[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec34[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec41[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec40[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 16384; l37 = l37 + 1) {
			fVec12[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec43[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec44[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec46[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec47[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 1048576; l42 = l42 + 1) {
			fRec42[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 16384; l43 = l43 + 1) {
			fVec13[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2048; l44 = l44 + 1) {
			fVec14[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec38[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec53[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec52[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 16384; l48 = l48 + 1) {
			fVec15[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 4096; l49 = l49 + 1) {
			fVec16[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec50[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec57[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec56[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 16384; l53 = l53 + 1) {
			fVec17[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2048; l54 = l54 + 1) {
			fVec18[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec54[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec61[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec60[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 16384; l58 = l58 + 1) {
			fVec19[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2048; l59 = l59 + 1) {
			fVec20[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec58[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fRec0[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec1[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec2[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 3; l64 = l64 + 1) {
			fRec3[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fRec4[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 3; l66 = l66 + 1) {
			fRec5[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 3; l67 = l67 + 1) {
			fRec6[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec7[l68] = 0.0f;
		}
	}
	
	void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	_Pitch2* clone() {
		return new _Pitch2();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openTabBox("elysiera");
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("Mix");
		ui_interface->declare(&fVslider1, "0", "");
		ui_interface->declare(&fVslider1, "style", "knob");
		ui_interface->declare(&fVslider1, "unit", "%");
		ui_interface->addVerticalSlider("Mix", &fVslider1, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->declare(&fVslider13, "style", "knob");
		ui_interface->declare(&fVslider13, "unit", "dB");
		ui_interface->addVerticalSlider("Pre Gain", &fVslider13, FAUSTFLOAT(0.0f), FAUSTFLOAT(-3e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider0, "2", "");
		ui_interface->declare(&fVslider0, "style", "knob");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("Post Gain", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-3e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Reverb");
		ui_interface->declare(&fVslider5, "0", "");
		ui_interface->declare(&fVslider5, "style", "knob");
		ui_interface->declare(&fVslider5, "unit", "s");
		ui_interface->addVerticalSlider("Low decay", &fVslider5, FAUSTFLOAT(3.7f), FAUSTFLOAT(1.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "style", "knob");
		ui_interface->declare(&fVslider6, "unit", "Hz");
		ui_interface->addVerticalSlider("LF Crossover", &fVslider6, FAUSTFLOAT(4.4e+02f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "style", "knob");
		ui_interface->declare(&fVslider3, "unit", "s");
		ui_interface->addVerticalSlider("Mid Decay", &fVslider3, FAUSTFLOAT(4.68f), FAUSTFLOAT(1.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->declare(&fVslider4, "style", "knob");
		ui_interface->declare(&fVslider4, "unit", "Hz");
		ui_interface->addVerticalSlider("HF Damping", &fVslider4, FAUSTFLOAT(8.6e+03f), FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(21609.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider22, "4", "");
		ui_interface->declare(&fVslider22, "style", "knob");
		ui_interface->declare(&fVslider22, "unit", "ms");
		ui_interface->addVerticalSlider("Reverb Delay", &fVslider22, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider2, "5", "");
		ui_interface->declare(&fVslider2, "style", "knob");
		ui_interface->declare(&fVslider2, "unit", "%");
		ui_interface->addVerticalSlider("Reverb Mix", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Echo");
		ui_interface->declare(&fVslider15, "0", "");
		ui_interface->declare(&fVslider15, "style", "knob");
		ui_interface->declare(&fVslider15, "unit", "s");
		ui_interface->addVerticalSlider("Delay", &fVslider15, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider14, "1", "");
		ui_interface->declare(&fVslider14, "style", "knob");
		ui_interface->declare(&fVslider14, "unit", "%");
		ui_interface->addVerticalSlider("Feedback", &fVslider14, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.99f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Filter");
		ui_interface->declare(&fVslider11, "0", "");
		ui_interface->declare(&fVslider11, "style", "knob");
		ui_interface->declare(&fVslider11, "unit", "Hz");
		ui_interface->addVerticalSlider("Lowpass", &fVslider11, FAUSTFLOAT(1.8e+04f), FAUSTFLOAT(25.0f), FAUSTFLOAT(2.2e+04f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider12, "1", "");
		ui_interface->declare(&fVslider12, "style", "knob");
		ui_interface->addVerticalSlider("Lowpass Q", &fVslider12, FAUSTFLOAT(0.71f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider16, "3", "");
		ui_interface->declare(&fVslider16, "style", "knob");
		ui_interface->declare(&fVslider16, "unit", "Hz");
		ui_interface->addVerticalSlider("Highpass", &fVslider16, FAUSTFLOAT(2.5e+02f), FAUSTFLOAT(25.0f), FAUSTFLOAT(2.2e+04f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider17, "4", "");
		ui_interface->declare(&fVslider17, "style", "knob");
		ui_interface->addVerticalSlider("Highpass Q", &fVslider17, FAUSTFLOAT(0.71f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openHorizontalBox("Pitch");
		ui_interface->declare(&fVslider10, "0", "");
		ui_interface->declare(&fVslider10, "style", "knob");
		ui_interface->declare(&fVslider10, "unit", "st");
		ui_interface->addVerticalSlider("Pitch A", &fVslider10, FAUSTFLOAT(12.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->declare(&fVslider7, "style", "knob");
		ui_interface->declare(&fVslider7, "unit", "%");
		ui_interface->addVerticalSlider("Pitch A Mix", &fVslider7, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider19, "1", "");
		ui_interface->declare(&fVslider19, "style", "knob");
		ui_interface->declare(&fVslider19, "unit", "st");
		ui_interface->addVerticalSlider("Pitch B", &fVslider19, FAUSTFLOAT(5.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider18, "2", "");
		ui_interface->declare(&fVslider18, "style", "knob");
		ui_interface->declare(&fVslider18, "unit", "%");
		ui_interface->addVerticalSlider("Pitch B Mix", &fVslider18, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openHorizontalBox("Mod");
		ui_interface->declare(&fVslider9, "5", "");
		ui_interface->declare(&fVslider9, "style", "knob");
		ui_interface->declare(&fVslider9, "unit", "hz");
		ui_interface->addVerticalSlider("Pitch Mod Rate", &fVslider9, FAUSTFLOAT(3.1f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider8, "6", "");
		ui_interface->declare(&fVslider8, "style", "knob");
		ui_interface->declare(&fVslider8, "unit", "%");
		ui_interface->addVerticalSlider("Pitch Mod Mix", &fVslider8, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider21, "7", "");
		ui_interface->declare(&fVslider21, "style", "knob");
		ui_interface->declare(&fVslider21, "unit", "hz");
		ui_interface->addVerticalSlider("Volume Mod Rate", &fVslider21, FAUSTFLOAT(3.1f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider20, "8", "");
		ui_interface->declare(&fVslider20, "style", "knob");
		ui_interface->declare(&fVslider20, "unit", "%");
		ui_interface->addVerticalSlider("Volume Mod Mix", &fVslider20, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 0.70710677f * std::pow(1e+01f, 0.05f * std::max<float>(-3e+01f, std::min<float>(1e+01f, float(fVslider0))));
		float fSlow1 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider1)));
		float fSlow2 = std::sin(fSlow1);
		float fSlow3 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider2)));
		float fSlow4 = 0.26162952f * std::sin(fSlow3);
		float fSlow5 = std::max<float>(1.0f, std::min<float>(6e+01f, float(fVslider3)));
		float fSlow6 = std::exp(-(fConst2 / fSlow5));
		float fSlow7 = std::cos(fConst3 * std::max<float>(1.5e+03f, std::min<float>(21609.0f, float(fVslider4))));
		float fSlow8 = _Pitch2_faustpower2_f(fSlow6);
		float fSlow9 = 1.0f - fSlow7 * fSlow8;
		float fSlow10 = 1.0f - fSlow8;
		float fSlow11 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow9) / _Pitch2_faustpower2_f(fSlow10) + -1.0f));
		float fSlow12 = fSlow9 / fSlow10;
		float fSlow13 = fSlow6 * (fSlow11 + (1.0f - fSlow12));
		float fSlow14 = std::max<float>(1.0f, std::min<float>(6e+01f, float(fVslider5)));
		float fSlow15 = std::exp(-(fConst2 / fSlow14)) / fSlow6 + -1.0f;
		float fSlow16 = 1.0f / std::tan(fConst4 * std::max<float>(5e+01f, std::min<float>(1e+03f, float(fVslider6))));
		float fSlow17 = 1.0f / (fSlow16 + 1.0f);
		float fSlow18 = 1.0f - fSlow16;
		float fSlow19 = fSlow12 - fSlow11;
		float fSlow20 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider7)));
		float fSlow21 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider8)));
		float fSlow22 = fConst7 * std::max<float>(0.01f, std::min<float>(1e+01f, float(fVslider9)));
		float fSlow23 = std::pow(2.0f, 0.083333336f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fVslider10))));
		float fSlow24 = std::tan(fConst4 * std::max<float>(25.0f, std::min<float>(2.2e+04f, float(fVslider11))));
		float fSlow25 = fSlow24 * (1.0f / std::max<float>(0.1f, std::min<float>(2.0f, float(fVslider12))) + fSlow24) + 1.0f;
		float fSlow26 = 2.0f / fSlow25;
		float fSlow27 = std::pow(1e+01f, 0.05f * std::max<float>(-3e+01f, std::min<float>(1e+01f, float(fVslider13))));
		float fSlow28 = fSlow24 / fSlow25;
		float fSlow29 = std::max<float>(0.0f, std::min<float>(0.99f, float(fVslider14)));
		int iSlow30 = int(std::min<float>(fConst8, std::max<float>(0.0f, fConst0 * std::max<float>(0.0f, std::min<float>(5.0f, float(fVslider15)))))) + 1;
		float fSlow31 = std::tan(fConst4 * std::max<float>(25.0f, std::min<float>(2.2e+04f, float(fVslider16))));
		float fSlow32 = 1.0f / std::max<float>(0.1f, std::min<float>(2.0f, float(fVslider17)));
		float fSlow33 = fSlow31 * (fSlow32 + fSlow31) + 1.0f;
		float fSlow34 = 2.0f / fSlow33;
		float fSlow35 = fSlow31 / fSlow33;
		float fSlow36 = 1.0f / fSlow33;
		float fSlow37 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider18)));
		float fSlow38 = std::pow(2.0f, 0.083333336f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fVslider19))));
		float fSlow39 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider20)));
		float fSlow40 = std::cos(fSlow39);
		float fSlow41 = std::sin(fSlow39);
		float fSlow42 = fConst7 * std::max<float>(0.01f, std::min<float>(1e+01f, float(fVslider21)));
		int iSlow43 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst9 * std::max<float>(0.0f, std::min<float>(1e+02f, float(fVslider22))))));
		float fSlow44 = std::exp(-(fConst12 / fSlow5));
		float fSlow45 = _Pitch2_faustpower2_f(fSlow44);
		float fSlow46 = 1.0f - fSlow7 * fSlow45;
		float fSlow47 = 1.0f - fSlow45;
		float fSlow48 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow46) / _Pitch2_faustpower2_f(fSlow47) + -1.0f));
		float fSlow49 = fSlow46 / fSlow47;
		float fSlow50 = fSlow44 * (fSlow48 + (1.0f - fSlow49));
		float fSlow51 = std::exp(-(fConst12 / fSlow14)) / fSlow44 + -1.0f;
		float fSlow52 = fSlow49 - fSlow48;
		float fSlow53 = std::exp(-(fConst17 / fSlow5));
		float fSlow54 = _Pitch2_faustpower2_f(fSlow53);
		float fSlow55 = 1.0f - fSlow7 * fSlow54;
		float fSlow56 = 1.0f - fSlow54;
		float fSlow57 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow55) / _Pitch2_faustpower2_f(fSlow56) + -1.0f));
		float fSlow58 = fSlow55 / fSlow56;
		float fSlow59 = fSlow53 * (fSlow57 + (1.0f - fSlow58));
		float fSlow60 = std::exp(-(fConst17 / fSlow14)) / fSlow53 + -1.0f;
		float fSlow61 = fSlow58 - fSlow57;
		float fSlow62 = std::exp(-(fConst22 / fSlow5));
		float fSlow63 = _Pitch2_faustpower2_f(fSlow62);
		float fSlow64 = 1.0f - fSlow7 * fSlow63;
		float fSlow65 = 1.0f - fSlow63;
		float fSlow66 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow64) / _Pitch2_faustpower2_f(fSlow65) + -1.0f));
		float fSlow67 = fSlow64 / fSlow65;
		float fSlow68 = fSlow62 * (fSlow66 + (1.0f - fSlow67));
		float fSlow69 = std::exp(-(fConst22 / fSlow14)) / fSlow62 + -1.0f;
		float fSlow70 = fSlow67 - fSlow66;
		float fSlow71 = std::exp(-(fConst27 / fSlow5));
		float fSlow72 = _Pitch2_faustpower2_f(fSlow71);
		float fSlow73 = 1.0f - fSlow7 * fSlow72;
		float fSlow74 = 1.0f - fSlow72;
		float fSlow75 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow73) / _Pitch2_faustpower2_f(fSlow74) + -1.0f));
		float fSlow76 = fSlow73 / fSlow74;
		float fSlow77 = fSlow71 * (fSlow75 + (1.0f - fSlow76));
		float fSlow78 = std::exp(-(fConst27 / fSlow14)) / fSlow71 + -1.0f;
		float fSlow79 = fSlow76 - fSlow75;
		float fSlow80 = std::exp(-(fConst32 / fSlow5));
		float fSlow81 = _Pitch2_faustpower2_f(fSlow80);
		float fSlow82 = 1.0f - fSlow7 * fSlow81;
		float fSlow83 = 1.0f - fSlow81;
		float fSlow84 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow82) / _Pitch2_faustpower2_f(fSlow83) + -1.0f));
		float fSlow85 = fSlow82 / fSlow83;
		float fSlow86 = fSlow80 * (fSlow84 + (1.0f - fSlow85));
		float fSlow87 = std::exp(-(fConst32 / fSlow14)) / fSlow80 + -1.0f;
		float fSlow88 = fSlow85 - fSlow84;
		float fSlow89 = std::exp(-(fConst37 / fSlow5));
		float fSlow90 = _Pitch2_faustpower2_f(fSlow89);
		float fSlow91 = 1.0f - fSlow7 * fSlow90;
		float fSlow92 = 1.0f - fSlow90;
		float fSlow93 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow91) / _Pitch2_faustpower2_f(fSlow92) + -1.0f));
		float fSlow94 = fSlow91 / fSlow92;
		float fSlow95 = fSlow89 * (fSlow93 + (1.0f - fSlow94));
		float fSlow96 = std::exp(-(fConst37 / fSlow14)) / fSlow89 + -1.0f;
		float fSlow97 = fSlow94 - fSlow93;
		float fSlow98 = std::exp(-(fConst42 / fSlow5));
		float fSlow99 = _Pitch2_faustpower2_f(fSlow98);
		float fSlow100 = 1.0f - fSlow99 * fSlow7;
		float fSlow101 = 1.0f - fSlow99;
		float fSlow102 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow100) / _Pitch2_faustpower2_f(fSlow101) + -1.0f));
		float fSlow103 = fSlow100 / fSlow101;
		float fSlow104 = fSlow98 * (fSlow102 + (1.0f - fSlow103));
		float fSlow105 = std::exp(-(fConst42 / fSlow14)) / fSlow98 + -1.0f;
		float fSlow106 = fSlow103 - fSlow102;
		float fSlow107 = 0.5f * std::cos(fSlow3);
		float fSlow108 = fSlow27 * std::cos(fSlow1);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			fRec11[0] = -(fSlow17 * (fSlow18 * fRec11[1] - (fRec7[1] + fRec7[2])));
			fRec10[0] = fSlow13 * (fRec7[1] + fSlow15 * fRec11[0]) + fSlow19 * fRec10[1];
			fVec1[IOTA0 & 32767] = 0.35355338f * fRec10[0] + 1e-20f;
			float fTemp0 = 0.6f * fRec8[1] + fVec1[(IOTA0 - iConst6) & 32767];
			int iTemp1 = 1 - iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow22 + fRec13[1]);
			fRec13[0] = fTemp2 - std::floor(fTemp2);
			int iTemp3 = std::max<int>(0, std::min<int>(int(65536.0f * fRec13[0]), 65535));
			float fTemp4 = 1.0f - fSlow21 * (1.0f - ftbl0_Pitch2SIG0[iTemp3]);
			fRec14[0] = std::fmod(fRec14[1] + 2049.0f - fSlow23, 2048.0f);
			float fTemp5 = std::min<float>(0.0009765625f * fRec14[0], 1.0f);
			float fTemp6 = std::floor(fRec14[0]);
			float fTemp7 = fTemp6 + (1.0f - fRec14[0]);
			float fTemp8 = float(input1[i0]);
			float fTemp9 = fSlow27 * fTemp8;
			float fTemp10 = fRec16[1] + fSlow24 * (fTemp9 - fRec17[1]);
			fRec16[0] = fSlow26 * fTemp10 - fRec16[1];
			float fTemp11 = fRec17[1] + fSlow28 * fTemp10;
			fRec17[0] = 2.0f * fTemp11 - fRec17[1];
			float fRec18 = fTemp11;
			float fTemp12 = fRec19[1] + fSlow31 * (fRec18 - fRec20[1]);
			fRec19[0] = fSlow34 * fTemp12 - fRec19[1];
			float fTemp13 = fRec20[1] + fSlow35 * fTemp12;
			fRec20[0] = 2.0f * fTemp13 - fRec20[1];
			float fRec21 = fSlow36 * fTemp12;
			float fRec22 = fTemp13;
			fRec15[IOTA0 & 1048575] = fRec18 + fSlow29 * fRec15[(IOTA0 - iSlow30) & 1048575] - (fRec22 + fSlow32 * fRec21);
			int iTemp14 = int(fRec14[0]);
			int iTemp15 = std::min<int>(65537, std::max<int>(0, iTemp14));
			float fTemp16 = fRec14[0] - fTemp6;
			int iTemp17 = std::min<int>(65537, std::max<int>(0, iTemp14 + 1));
			float fTemp18 = 1.0f - fTemp5;
			float fTemp19 = fRec14[0] + 2048.0f;
			float fTemp20 = std::floor(fTemp19);
			float fTemp21 = fTemp20 + (-2047.0f - fRec14[0]);
			int iTemp22 = int(fTemp19);
			int iTemp23 = std::min<int>(65537, std::max<int>(0, iTemp22));
			float fTemp24 = fRec14[0] + (2048.0f - fTemp20);
			int iTemp25 = std::min<int>(65537, std::max<int>(0, iTemp22 + 1));
			float fTemp26 = 1.0f - fSlow21 * (1.0f - ftbl1_Pitch2SIG1[iTemp3]);
			fRec24[0] = std::fmod(fRec24[1] + 2049.0f - fSlow38, 2048.0f);
			float fTemp27 = std::min<float>(0.0009765625f * fRec24[0], 1.0f);
			float fTemp28 = std::floor(fRec24[0]);
			float fTemp29 = fTemp28 + (1.0f - fRec24[0]);
			int iTemp30 = int(fRec24[0]);
			int iTemp31 = std::min<int>(65537, std::max<int>(0, iTemp30));
			float fTemp32 = fRec24[0] - fTemp28;
			int iTemp33 = std::min<int>(65537, std::max<int>(0, iTemp30 + 1));
			float fTemp34 = 1.0f - fTemp27;
			float fTemp35 = fRec24[0] + 2048.0f;
			float fTemp36 = std::floor(fTemp35);
			float fTemp37 = fTemp36 + (-2047.0f - fRec24[0]);
			int iTemp38 = int(fTemp35);
			int iTemp39 = std::min<int>(65537, std::max<int>(0, iTemp38));
			float fTemp40 = fRec24[0] + (2048.0f - fTemp36);
			int iTemp41 = std::min<int>(65537, std::max<int>(0, iTemp38 + 1));
			float fTemp42 = ((iTemp1) ? 0.0f : fSlow42 + fRec25[1]);
			fRec25[0] = fTemp42 - std::floor(fTemp42);
			int iTemp43 = std::max<int>(0, std::min<int>(int(65536.0f * fRec25[0]), 65535));
			float fTemp44 = (fSlow20 * fTemp4 * (fTemp5 * (fTemp7 * fRec15[(IOTA0 - iTemp15) & 1048575] + fTemp16 * fRec15[(IOTA0 - iTemp17) & 1048575]) + fTemp18 * (fTemp21 * fRec15[(IOTA0 - iTemp23) & 1048575] + fTemp24 * fRec15[(IOTA0 - iTemp25) & 1048575])) + fSlow37 * fTemp26 * (fTemp27 * (fTemp29 * fRec15[(IOTA0 - iTemp31) & 1048575] + fTemp32 * fRec15[(IOTA0 - iTemp33) & 1048575]) + fTemp34 * (fTemp37 * fRec15[(IOTA0 - iTemp39) & 1048575] + fTemp40 * fRec15[(IOTA0 - iTemp41) & 1048575]))) * (fSlow40 + fSlow41 * ftbl0_Pitch2SIG0[iTemp43]);
			fVec4[IOTA0 & 16383] = fTemp44;
			float fTemp45 = 0.21213204f * fVec4[(IOTA0 - iSlow43) & 16383];
			fVec5[IOTA0 & 2047] = fTemp0 - fTemp45;
			fRec8[0] = fVec5[(IOTA0 - iConst10) & 2047];
			float fRec9 = 0.6f * (fTemp45 - fTemp0);
			fRec29[0] = -(fSlow17 * (fSlow18 * fRec29[1] - (fRec3[1] + fRec3[2])));
			fRec28[0] = fSlow50 * (fRec3[1] + fSlow51 * fRec29[0]) + fSlow52 * fRec28[1];
			fVec6[IOTA0 & 32767] = 0.35355338f * fRec28[0] + 1e-20f;
			float fTemp46 = 0.6f * fRec26[1] + fVec6[(IOTA0 - iConst14) & 32767];
			fVec7[IOTA0 & 4095] = fTemp46 - fTemp45;
			fRec26[0] = fVec7[(IOTA0 - iConst15) & 4095];
			float fRec27 = 0.6f * (fTemp45 - fTemp46);
			fRec33[0] = -(fSlow17 * (fSlow18 * fRec33[1] - (fRec5[1] + fRec5[2])));
			fRec32[0] = fSlow59 * (fRec5[1] + fSlow60 * fRec33[0]) + fSlow61 * fRec32[1];
			fVec8[IOTA0 & 16383] = 0.35355338f * fRec32[0] + 1e-20f;
			float fTemp47 = fVec8[(IOTA0 - iConst19) & 16383] + fTemp45 + 0.6f * fRec30[1];
			fVec9[IOTA0 & 4095] = fTemp47;
			fRec30[0] = fVec9[(IOTA0 - iConst20) & 4095];
			float fRec31 = -(0.6f * fTemp47);
			fRec37[0] = -(fSlow17 * (fSlow18 * fRec37[1] - (fRec1[1] + fRec1[2])));
			fRec36[0] = fSlow68 * (fRec1[1] + fSlow69 * fRec37[0]) + fSlow70 * fRec36[1];
			fVec10[IOTA0 & 32767] = 0.35355338f * fRec36[0] + 1e-20f;
			float fTemp48 = fTemp45 + 0.6f * fRec34[1] + fVec10[(IOTA0 - iConst24) & 32767];
			fVec11[IOTA0 & 4095] = fTemp48;
			fRec34[0] = fVec11[(IOTA0 - iConst25) & 4095];
			float fRec35 = -(0.6f * fTemp48);
			fRec41[0] = -(fSlow17 * (fSlow18 * fRec41[1] - (fRec6[1] + fRec6[2])));
			fRec40[0] = fSlow77 * (fRec6[1] + fSlow78 * fRec41[0]) + fSlow79 * fRec40[1];
			fVec12[IOTA0 & 16383] = 0.35355338f * fRec40[0] + 1e-20f;
			float fTemp49 = float(input0[i0]);
			float fTemp50 = fSlow27 * fTemp49;
			float fTemp51 = fRec43[1] + fSlow24 * (fTemp50 - fRec44[1]);
			fRec43[0] = fSlow26 * fTemp51 - fRec43[1];
			float fTemp52 = fRec44[1] + fSlow28 * fTemp51;
			fRec44[0] = 2.0f * fTemp52 - fRec44[1];
			float fRec45 = fTemp52;
			float fTemp53 = fRec46[1] + fSlow31 * (fRec45 - fRec47[1]);
			fRec46[0] = fSlow34 * fTemp53 - fRec46[1];
			float fTemp54 = fRec47[1] + fSlow35 * fTemp53;
			fRec47[0] = 2.0f * fTemp54 - fRec47[1];
			float fRec48 = fSlow36 * fTemp53;
			float fRec49 = fTemp54;
			fRec42[IOTA0 & 1048575] = fRec45 + fSlow29 * fRec42[(IOTA0 - iSlow30) & 1048575] - (fRec49 + fSlow32 * fRec48);
			float fTemp55 = (fSlow20 * ((fRec42[(IOTA0 - iTemp15) & 1048575] * fTemp7 + fTemp16 * fRec42[(IOTA0 - iTemp17) & 1048575]) * fTemp5 + (fRec42[(IOTA0 - iTemp23) & 1048575] * fTemp21 + fTemp24 * fRec42[(IOTA0 - iTemp25) & 1048575]) * fTemp18) * fTemp26 + fSlow37 * ((fRec42[(IOTA0 - iTemp31) & 1048575] * fTemp29 + fTemp32 * fRec42[(IOTA0 - iTemp33) & 1048575]) * fTemp27 + (fRec42[(IOTA0 - iTemp39) & 1048575] * fTemp37 + fTemp40 * fRec42[(IOTA0 - iTemp41) & 1048575]) * fTemp34) * fTemp4) * (fSlow40 + fSlow41 * ftbl1_Pitch2SIG1[iTemp43]);
			fVec13[IOTA0 & 16383] = fTemp55;
			float fTemp56 = 0.21213204f * fVec13[(IOTA0 - iSlow43) & 16383];
			float fTemp57 = fVec12[(IOTA0 - iConst29) & 16383] - (fTemp56 + 0.6f * fRec38[1]);
			fVec14[IOTA0 & 2047] = fTemp57;
			fRec38[0] = fVec14[(IOTA0 - iConst30) & 2047];
			float fRec39 = 0.6f * fTemp57;
			fRec53[0] = -(fSlow17 * (fSlow18 * fRec53[1] - (fRec2[1] + fRec2[2])));
			fRec52[0] = fSlow86 * (fRec2[1] + fSlow87 * fRec53[0]) + fSlow88 * fRec52[1];
			fVec15[IOTA0 & 16383] = 0.35355338f * fRec52[0] + 1e-20f;
			float fTemp58 = fVec15[(IOTA0 - iConst34) & 16383] - (fTemp56 + 0.6f * fRec50[1]);
			fVec16[IOTA0 & 4095] = fTemp58;
			fRec50[0] = fVec16[(IOTA0 - iConst35) & 4095];
			float fRec51 = 0.6f * fTemp58;
			fRec57[0] = -(fSlow17 * (fSlow18 * fRec57[1] - (fRec4[1] + fRec4[2])));
			fRec56[0] = fSlow95 * (fRec4[1] + fSlow96 * fRec57[0]) + fSlow97 * fRec56[1];
			fVec17[IOTA0 & 16383] = 0.35355338f * fRec56[0] + 1e-20f;
			float fTemp59 = fTemp56 + fVec17[(IOTA0 - iConst39) & 16383] - 0.6f * fRec54[1];
			fVec18[IOTA0 & 2047] = fTemp59;
			fRec54[0] = fVec18[(IOTA0 - iConst40) & 2047];
			float fRec55 = 0.6f * fTemp59;
			fRec61[0] = -(fSlow17 * (fSlow18 * fRec61[1] - (fRec0[1] + fRec0[2])));
			fRec60[0] = fSlow104 * (fRec0[1] + fSlow105 * fRec61[0]) + fSlow106 * fRec60[1];
			fVec19[IOTA0 & 16383] = 0.35355338f * fRec60[0] + 1e-20f;
			float fTemp60 = fVec19[(IOTA0 - iConst44) & 16383] + fTemp56 - 0.6f * fRec58[1];
			fVec20[IOTA0 & 2047] = fTemp60;
			fRec58[0] = fVec20[(IOTA0 - iConst45) & 2047];
			float fRec59 = 0.6f * fTemp60;
			float fTemp61 = fRec59 + fRec55;
			float fTemp62 = fRec39 + fRec51 + fTemp61;
			fRec0[0] = fRec8[1] + fRec26[1] + fRec30[1] + fRec34[1] + fRec38[1] + fRec50[1] + fRec54[1] + fRec58[1] + fRec9 + fRec27 + fRec31 + fRec35 + fTemp62;
			fRec1[0] = fRec38[1] + fRec50[1] + fRec54[1] + fRec58[1] + fTemp62 - (fRec8[1] + fRec26[1] + fRec30[1] + fRec34[1] + fRec9 + fRec27 + fRec35 + fRec31);
			float fTemp63 = fRec51 + fRec39;
			fRec2[0] = fRec30[1] + fRec34[1] + fRec54[1] + fRec58[1] + fRec31 + fRec35 + fTemp61 - (fRec8[1] + fRec26[1] + fRec38[1] + fRec50[1] + fRec9 + fRec27 + fTemp63);
			fRec3[0] = fRec8[1] + fRec26[1] + fRec54[1] + fRec58[1] + fRec9 + fRec27 + fTemp61 - (fRec30[1] + fRec34[1] + fRec38[1] + fRec50[1] + fRec31 + fRec35 + fTemp63);
			float fTemp64 = fRec59 + fRec51;
			float fTemp65 = fRec55 + fRec39;
			fRec4[0] = fRec26[1] + fRec34[1] + fRec50[1] + fRec58[1] + fRec27 + fRec35 + fTemp64 - (fRec8[1] + fRec30[1] + fRec38[1] + fRec54[1] + fRec9 + fRec31 + fTemp65);
			fRec5[0] = fRec8[1] + fRec30[1] + fRec50[1] + fRec58[1] + fRec9 + fRec31 + fTemp64 - (fRec26[1] + fRec34[1] + fRec38[1] + fRec54[1] + fRec27 + fRec35 + fTemp65);
			float fTemp66 = fRec59 + fRec39;
			float fTemp67 = fRec55 + fRec51;
			fRec6[0] = fRec8[1] + fRec34[1] + fRec38[1] + fRec58[1] + fRec9 + fRec35 + fTemp66 - (fRec26[1] + fRec30[1] + fRec50[1] + fRec54[1] + fRec27 + fRec31 + fTemp67);
			fRec7[0] = fRec26[1] + fRec30[1] + fRec38[1] + fRec58[1] + fRec27 + fRec31 + fTemp66 - (fRec8[1] + fRec34[1] + fRec50[1] + fRec54[1] + fRec9 + fRec35 + fTemp67);
			output0[i0] = FAUSTFLOAT(fSlow0 * (fSlow2 * (fSlow4 * (fRec1[0] + fRec2[0]) + fSlow107 * fTemp55) + fSlow108 * fTemp49));
			output1[i0] = FAUSTFLOAT(fSlow0 * (fSlow2 * (fSlow4 * (fRec1[0] - fRec2[0]) + fSlow107 * fTemp44) + fSlow108 * fTemp8));
			iVec0[1] = iVec0[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			IOTA0 = IOTA0 + 1;
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec16[1] = fRec16[0];
			fRec17[1] = fRec17[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec8[1] = fRec8[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec26[1] = fRec26[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fRec30[1] = fRec30[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fRec34[1] = fRec34[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec38[1] = fRec38[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
			fRec50[1] = fRec50[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fRec54[1] = fRec54[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fRec58[1] = fRec58[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "Pitch2.dsp"
	#define FAUST_CLASS_NAME "_Pitch2"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _Pitch2 -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 23
	#define FAUST_PASSIVES 0

	FAUST_ADDVERTICALSLIDER("[0]Mix/Mix", fVslider1, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[0]Mix/Pre Gain", fVslider13, 0.0f, -3e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("[0]Mix/Post Gain", fVslider0, 0.0f, -3e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Low decay", fVslider5, 3.7f, 1.0f, 6e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/LF Crossover", fVslider6, 4.4e+02f, 5e+01f, 1e+03f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Mid Decay", fVslider3, 4.68f, 1.0f, 6e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/HF Damping", fVslider4, 8.6e+03f, 1.5e+03f, 21609.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Reverb Delay", fVslider22, 0.0f, 0.0f, 1e+02f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Reverb Mix", fVslider2, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[2]Echo/Delay", fVslider15, 0.5f, 0.0f, 5.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[2]Echo/Feedback", fVslider14, 0.5f, 0.0f, 0.99f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Lowpass", fVslider11, 1.8e+04f, 25.0f, 2.2e+04f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Lowpass Q", fVslider12, 0.71f, 0.1f, 2.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Highpass", fVslider16, 2.5e+02f, 25.0f, 2.2e+04f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Highpass Q", fVslider17, 0.71f, 0.1f, 2.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch A", fVslider10, 12.0f, -12.0f, 12.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch A Mix", fVslider7, 0.6f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch B", fVslider19, 5.0f, -12.0f, 12.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch B Mix", fVslider18, 0.6f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Pitch Mod Rate", fVslider9, 3.1f, 0.01f, 1e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Pitch Mod Mix", fVslider8, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Volume Mod Rate", fVslider21, 3.1f, 0.01f, 1e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Volume Mod Mix", fVslider20, 1.0f, 0.0f, 1.0f, 0.01f);

	#define FAUST_LIST_ACTIVES(p) \
		p(VERTICALSLIDER, Mix, "[0]Mix/Mix", fVslider1, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pre_Gain, "[0]Mix/Pre Gain", fVslider13, 0.0f, -3e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Post_Gain, "[0]Mix/Post Gain", fVslider0, 0.0f, -3e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Low_decay, "[1]Reverb/Low decay", fVslider5, 3.7f, 1.0f, 6e+01f, 0.01f) \
		p(VERTICALSLIDER, LF_Crossover, "[1]Reverb/LF Crossover", fVslider6, 4.4e+02f, 5e+01f, 1e+03f, 1.0f) \
		p(VERTICALSLIDER, Mid_Decay, "[1]Reverb/Mid Decay", fVslider3, 4.68f, 1.0f, 6e+01f, 0.01f) \
		p(VERTICALSLIDER, HF_Damping, "[1]Reverb/HF Damping", fVslider4, 8.6e+03f, 1.5e+03f, 21609.0f, 1.0f) \
		p(VERTICALSLIDER, Reverb_Delay, "[1]Reverb/Reverb Delay", fVslider22, 0.0f, 0.0f, 1e+02f, 0.01f) \
		p(VERTICALSLIDER, Reverb_Mix, "[1]Reverb/Reverb Mix", fVslider2, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Delay, "[2]Echo/Delay", fVslider15, 0.5f, 0.0f, 5.0f, 0.01f) \
		p(VERTICALSLIDER, Feedback, "[2]Echo/Feedback", fVslider14, 0.5f, 0.0f, 0.99f, 0.01f) \
		p(VERTICALSLIDER, Lowpass, "[3]Filter/Lowpass", fVslider11, 1.8e+04f, 25.0f, 2.2e+04f, 0.01f) \
		p(VERTICALSLIDER, Lowpass_Q, "[3]Filter/Lowpass Q", fVslider12, 0.71f, 0.1f, 2.0f, 0.01f) \
		p(VERTICALSLIDER, Highpass, "[3]Filter/Highpass", fVslider16, 2.5e+02f, 25.0f, 2.2e+04f, 0.01f) \
		p(VERTICALSLIDER, Highpass_Q, "[3]Filter/Highpass Q", fVslider17, 0.71f, 0.1f, 2.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_A, "[4]Pitch/Pitch A", fVslider10, 12.0f, -12.0f, 12.0f, 1.0f) \
		p(VERTICALSLIDER, Pitch_A_Mix, "[4]Pitch/Pitch A Mix", fVslider7, 0.6f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_B, "[4]Pitch/Pitch B", fVslider19, 5.0f, -12.0f, 12.0f, 1.0f) \
		p(VERTICALSLIDER, Pitch_B_Mix, "[4]Pitch/Pitch B Mix", fVslider18, 0.6f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_Mod_Rate, "[5]Mod/Pitch Mod Rate", fVslider9, 3.1f, 0.01f, 1e+01f, 0.01f) \
		p(VERTICALSLIDER, Pitch_Mod_Mix, "[5]Mod/Pitch Mod Mix", fVslider8, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Volume_Mod_Rate, "[5]Mod/Volume Mod Rate", fVslider21, 3.1f, 0.01f, 1e+01f, 0.01f) \
		p(VERTICALSLIDER, Volume_Mod_Mix, "[5]Mod/Volume Mod Mix", fVslider20, 1.0f, 0.0f, 1.0f, 0.01f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
