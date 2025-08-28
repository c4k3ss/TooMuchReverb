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
	int iVec0[2];
	int iRec0[2];
	
	int getNumInputs_Pitch2SIG0() {
		return 0;
	}
	int getNumOutputs_Pitch2SIG0() {
		return 1;
	}
	
	void instanceInit_Pitch2SIG0(int sample_rate) {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			iRec0[l1] = 0;
		}
	}
	
	void fill_Pitch2SIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			iVec0[0] = 1;
			iRec0[0] = (iVec0[1] + iRec0[1]) % 65536;
			table[i1] = std::sin(9.58738e-05f * float(iRec0[0]));
			iVec0[1] = iVec0[0];
			iRec0[1] = iRec0[0];
		}
	}

};

static _Pitch2SIG0* new_Pitch2SIG0() { return (_Pitch2SIG0*)new _Pitch2SIG0(); }
static void delete_Pitch2SIG0(_Pitch2SIG0* dsp) { delete dsp; }

struct _Pitch2SIG1 {
	int iVec2[2];
	int iRec2[2];
	
	int getNumInputs_Pitch2SIG1() {
		return 0;
	}
	int getNumOutputs_Pitch2SIG1() {
		return 1;
	}
	
	void instanceInit_Pitch2SIG1(int sample_rate) {
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iVec2[l4] = 0;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			iRec2[l5] = 0;
		}
	}
	
	void fill_Pitch2SIG1(int count, float* table) {
		for (int i2 = 0; i2 < count; i2 = i2 + 1) {
			iVec2[0] = 1;
			iRec2[0] = (iVec2[1] + iRec2[1]) % 65536;
			table[i2] = std::cos(9.58738e-05f * float(iRec2[0]));
			iVec2[1] = iVec2[0];
			iRec2[1] = iRec2[0];
		}
	}

};

static _Pitch2SIG1* new_Pitch2SIG1() { return (_Pitch2SIG1*)new _Pitch2SIG1(); }
static void delete_Pitch2SIG1(_Pitch2SIG1* dsp) { delete dsp; }

static float ftbl0_Pitch2SIG0[65536];
static float ftbl1_Pitch2SIG1[65536];
static float _Pitch2_faustpower2_f(float value) {
	return value * value;
}

struct _Pitch2 final : public ::faust::dsp {
	
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	int iVec1[2];
	FAUSTFLOAT fVslider2;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec1[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fRec3[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fRec4[2];
	FAUSTFLOAT fVslider7;
	float fConst2;
	FAUSTFLOAT fVslider8;
	float fRec10[2];
	float fRec11[2];
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	float fRec6[2];
	float fRec7[2];
	int IOTA0;
	float fConst3;
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	float fRec5[1048576];
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	float fRec13[2];
	FAUSTFLOAT fVslider15;
	float fVec3[16384];
	FAUSTFLOAT fVslider16;
	FAUSTFLOAT fVslider17;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fVslider18;
	float fConst6;
	FAUSTFLOAT fVslider19;
	float fRec25[2];
	FAUSTFLOAT fVslider20;
	float fRec24[2];
	float fVec4[16384];
	float fConst7;
	int iConst8;
	FAUSTFLOAT fVslider21;
	float fConst9;
	float fVec5[2048];
	int iConst10;
	float fRec22[2];
	float fConst11;
	float fConst12;
	float fRec29[2];
	float fRec28[2];
	float fVec6[16384];
	float fConst13;
	int iConst14;
	float fVec7[2048];
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
	float fVec10[16384];
	float fConst23;
	int iConst24;
	float fVec11[2048];
	int iConst25;
	float fRec34[2];
	float fConst26;
	float fConst27;
	float fRec41[2];
	float fRec40[2];
	float fVec12[32768];
	float fConst28;
	int iConst29;
	float fRec47[2];
	float fRec48[2];
	float fRec43[2];
	float fRec44[2];
	float fRec42[1048576];
	float fVec13[16384];
	float fVec14[4096];
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
	float fVec17[32768];
	float fConst38;
	int iConst39;
	float fVec18[4096];
	int iConst40;
	float fRec54[2];
	float fConst41;
	float fConst42;
	float fRec61[2];
	float fRec60[2];
	float fVec19[32768];
	float fConst43;
	int iConst44;
	float fVec20[2048];
	int iConst45;
	float fRec58[2];
	float fRec14[3];
	float fRec15[3];
	float fRec16[3];
	float fRec17[3];
	float fRec18[3];
	float fRec19[3];
	float fRec20[3];
	float fRec21[3];
	FAUSTFLOAT fVslider22;
	
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
		fConst1 = 1.0f / fConst0;
		fConst2 = 3.1415927f / fConst0;
		fConst3 = 5.0f * fConst0;
		fConst4 = std::floor(0.174713f * fConst0 + 0.5f);
		fConst5 = 6.9077554f * (fConst4 / fConst0);
		fConst6 = 6.2831855f / fConst0;
		fConst7 = std::floor(0.022904f * fConst0 + 0.5f);
		iConst8 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst4 - fConst7)));
		fConst9 = 0.001f * fConst0;
		iConst10 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst7 + -1.0f)));
		fConst11 = std::floor(0.153129f * fConst0 + 0.5f);
		fConst12 = 6.9077554f * (fConst11 / fConst0);
		fConst13 = std::floor(0.020346f * fConst0 + 0.5f);
		iConst14 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst11 - fConst13)));
		iConst15 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst13 + -1.0f)));
		fConst16 = std::floor(0.127837f * fConst0 + 0.5f);
		fConst17 = 6.9077554f * (fConst16 / fConst0);
		fConst18 = std::floor(0.031604f * fConst0 + 0.5f);
		iConst19 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst16 - fConst18)));
		iConst20 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst18 + -1.0f)));
		fConst21 = std::floor(0.125f * fConst0 + 0.5f);
		fConst22 = 6.9077554f * (fConst21 / fConst0);
		fConst23 = std::floor(0.013458f * fConst0 + 0.5f);
		iConst24 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst21 - fConst23)));
		iConst25 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst23 + -1.0f)));
		fConst26 = std::floor(0.210389f * fConst0 + 0.5f);
		fConst27 = 6.9077554f * (fConst26 / fConst0);
		fConst28 = std::floor(0.024421f * fConst0 + 0.5f);
		iConst29 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst26 - fConst28)));
		iConst30 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst28 + -1.0f)));
		fConst31 = std::floor(0.192303f * fConst0 + 0.5f);
		fConst32 = 6.9077554f * (fConst31 / fConst0);
		fConst33 = std::floor(0.029291f * fConst0 + 0.5f);
		iConst34 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst31 - fConst33)));
		iConst35 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst33 + -1.0f)));
		fConst36 = std::floor(0.256891f * fConst0 + 0.5f);
		fConst37 = 6.9077554f * (fConst36 / fConst0);
		fConst38 = std::floor(0.027333f * fConst0 + 0.5f);
		iConst39 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst36 - fConst38)));
		iConst40 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst38 + -1.0f)));
		fConst41 = std::floor(0.219991f * fConst0 + 0.5f);
		fConst42 = 6.9077554f * (fConst41 / fConst0);
		fConst43 = std::floor(0.019123f * fConst0 + 0.5f);
		iConst44 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst41 - fConst43)));
		iConst45 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst43 + -1.0f)));
	}
	
	void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(3.1f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(3.1f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(5.0f);
		fVslider7 = FAUSTFLOAT(1.8e+04f);
		fVslider8 = FAUSTFLOAT(0.71f);
		fVslider9 = FAUSTFLOAT(2.5e+02f);
		fVslider10 = FAUSTFLOAT(0.71f);
		fVslider11 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(0.5f);
		fVslider13 = FAUSTFLOAT(0.6f);
		fVslider14 = FAUSTFLOAT(12.0f);
		fVslider15 = FAUSTFLOAT(0.6f);
		fVslider16 = FAUSTFLOAT(1.0f);
		fVslider17 = FAUSTFLOAT(4.68f);
		fVslider18 = FAUSTFLOAT(8.6e+03f);
		fVslider19 = FAUSTFLOAT(4.4e+02f);
		fVslider20 = FAUSTFLOAT(3.7f);
		fVslider21 = FAUSTFLOAT(0.0f);
		fVslider22 = FAUSTFLOAT(0.0f);
	}
	
	void instanceClear() {
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			iVec1[l2] = 0;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec1[l3] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec3[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec4[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec10[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec11[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec7[l11] = 0.0f;
		}
		IOTA0 = 0;
		for (int l12 = 0; l12 < 1048576; l12 = l12 + 1) {
			fRec5[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec13[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 16384; l14 = l14 + 1) {
			fVec3[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec25[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec24[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 16384; l17 = l17 + 1) {
			fVec4[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2048; l18 = l18 + 1) {
			fVec5[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec22[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec29[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec28[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 16384; l22 = l22 + 1) {
			fVec6[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2048; l23 = l23 + 1) {
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
		for (int l32 = 0; l32 < 16384; l32 = l32 + 1) {
			fVec10[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2048; l33 = l33 + 1) {
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
		for (int l37 = 0; l37 < 32768; l37 = l37 + 1) {
			fVec12[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec47[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec48[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec43[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec44[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 1048576; l42 = l42 + 1) {
			fRec42[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 16384; l43 = l43 + 1) {
			fVec13[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 4096; l44 = l44 + 1) {
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
		for (int l53 = 0; l53 < 32768; l53 = l53 + 1) {
			fVec17[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 4096; l54 = l54 + 1) {
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
		for (int l58 = 0; l58 < 32768; l58 = l58 + 1) {
			fVec19[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2048; l59 = l59 + 1) {
			fVec20[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec58[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fRec14[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec15[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec16[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 3; l64 = l64 + 1) {
			fRec17[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fRec18[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 3; l66 = l66 + 1) {
			fRec19[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 3; l67 = l67 + 1) {
			fRec20[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec21[l68] = 0.0f;
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
		ui_interface->declare(&fVslider0, "0", "");
		ui_interface->declare(&fVslider0, "style", "knob");
		ui_interface->declare(&fVslider0, "unit", "%");
		ui_interface->addVerticalSlider("Mix", &fVslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "style", "knob");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("Pre Gain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-3e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider22, "2", "");
		ui_interface->declare(&fVslider22, "style", "knob");
		ui_interface->declare(&fVslider22, "unit", "dB");
		ui_interface->addVerticalSlider("Post Gain", &fVslider22, FAUSTFLOAT(0.0f), FAUSTFLOAT(-3e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Reverb");
		ui_interface->declare(&fVslider20, "0", "");
		ui_interface->declare(&fVslider20, "style", "knob");
		ui_interface->declare(&fVslider20, "unit", "s");
		ui_interface->addVerticalSlider("Low decay", &fVslider20, FAUSTFLOAT(3.7f), FAUSTFLOAT(1.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider19, "1", "");
		ui_interface->declare(&fVslider19, "style", "knob");
		ui_interface->declare(&fVslider19, "unit", "Hz");
		ui_interface->addVerticalSlider("LF Crossover", &fVslider19, FAUSTFLOAT(4.4e+02f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider17, "2", "");
		ui_interface->declare(&fVslider17, "style", "knob");
		ui_interface->declare(&fVslider17, "unit", "s");
		ui_interface->addVerticalSlider("Mid Decay", &fVslider17, FAUSTFLOAT(4.68f), FAUSTFLOAT(1.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider18, "3", "");
		ui_interface->declare(&fVslider18, "style", "knob");
		ui_interface->declare(&fVslider18, "unit", "Hz");
		ui_interface->addVerticalSlider("HF Damping", &fVslider18, FAUSTFLOAT(8.6e+03f), FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(21609.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider21, "4", "");
		ui_interface->declare(&fVslider21, "style", "knob");
		ui_interface->declare(&fVslider21, "unit", "ms");
		ui_interface->addVerticalSlider("Reverb Delay", &fVslider21, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider16, "5", "");
		ui_interface->declare(&fVslider16, "style", "knob");
		ui_interface->declare(&fVslider16, "unit", "%");
		ui_interface->addVerticalSlider("Reverb Mix", &fVslider16, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Echo");
		ui_interface->declare(&fVslider11, "0", "");
		ui_interface->declare(&fVslider11, "style", "knob");
		ui_interface->declare(&fVslider11, "unit", "s");
		ui_interface->addVerticalSlider("Delay", &fVslider11, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider12, "1", "");
		ui_interface->declare(&fVslider12, "style", "knob");
		ui_interface->declare(&fVslider12, "unit", "%");
		ui_interface->addVerticalSlider("Feedback", &fVslider12, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.99f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Filter");
		ui_interface->declare(&fVslider7, "0", "");
		ui_interface->declare(&fVslider7, "style", "knob");
		ui_interface->declare(&fVslider7, "unit", "Hz");
		ui_interface->addVerticalSlider("Lowpass", &fVslider7, FAUSTFLOAT(1.8e+04f), FAUSTFLOAT(25.0f), FAUSTFLOAT(2.2e+04f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->declare(&fVslider8, "style", "knob");
		ui_interface->addVerticalSlider("Lowpass Q", &fVslider8, FAUSTFLOAT(0.71f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider9, "3", "");
		ui_interface->declare(&fVslider9, "style", "knob");
		ui_interface->declare(&fVslider9, "unit", "Hz");
		ui_interface->addVerticalSlider("Highpass", &fVslider9, FAUSTFLOAT(2.5e+02f), FAUSTFLOAT(25.0f), FAUSTFLOAT(2.2e+04f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider10, "4", "");
		ui_interface->declare(&fVslider10, "style", "knob");
		ui_interface->addVerticalSlider("Highpass Q", &fVslider10, FAUSTFLOAT(0.71f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openHorizontalBox("Pitch");
		ui_interface->declare(&fVslider14, "0", "");
		ui_interface->declare(&fVslider14, "style", "knob");
		ui_interface->declare(&fVslider14, "unit", "st");
		ui_interface->addVerticalSlider("Pitch A", &fVslider14, FAUSTFLOAT(12.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider15, "1", "");
		ui_interface->declare(&fVslider15, "style", "knob");
		ui_interface->declare(&fVslider15, "unit", "%");
		ui_interface->addVerticalSlider("Pitch A Mix", &fVslider15, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "style", "knob");
		ui_interface->declare(&fVslider6, "unit", "st");
		ui_interface->addVerticalSlider("Pitch B", &fVslider6, FAUSTFLOAT(5.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider13, "2", "");
		ui_interface->declare(&fVslider13, "style", "knob");
		ui_interface->declare(&fVslider13, "unit", "%");
		ui_interface->addVerticalSlider("Pitch B Mix", &fVslider13, FAUSTFLOAT(0.6f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openHorizontalBox("Mod");
		ui_interface->declare(&fVslider4, "5", "");
		ui_interface->declare(&fVslider4, "style", "knob");
		ui_interface->declare(&fVslider4, "unit", "hz");
		ui_interface->addVerticalSlider("Pitch Mod Rate", &fVslider4, FAUSTFLOAT(3.1f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider5, "6", "");
		ui_interface->declare(&fVslider5, "style", "knob");
		ui_interface->declare(&fVslider5, "unit", "%");
		ui_interface->addVerticalSlider("Pitch Mod Mix", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider2, "7", "");
		ui_interface->declare(&fVslider2, "style", "knob");
		ui_interface->declare(&fVslider2, "unit", "hz");
		ui_interface->addVerticalSlider("Volume Mod Rate", &fVslider2, FAUSTFLOAT(3.1f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider3, "8", "");
		ui_interface->declare(&fVslider3, "style", "knob");
		ui_interface->declare(&fVslider3, "unit", "%");
		ui_interface->addVerticalSlider("Volume Mod Mix", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider0)));
		float fSlow1 = std::pow(1e+01f, 0.05f * std::max<float>(-3e+01f, std::min<float>(1e+01f, float(fVslider1))));
		float fSlow2 = fSlow1 * std::cos(fSlow0);
		float fSlow3 = fConst1 * std::max<float>(0.01f, std::min<float>(1e+01f, float(fVslider2)));
		float fSlow4 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider3)));
		float fSlow5 = std::sin(fSlow4);
		float fSlow6 = std::cos(fSlow4);
		float fSlow7 = fConst1 * std::max<float>(0.01f, std::min<float>(1e+01f, float(fVslider4)));
		float fSlow8 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider5)));
		float fSlow9 = std::pow(2.0f, 0.083333336f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fVslider6))));
		float fSlow10 = std::tan(fConst2 * std::max<float>(25.0f, std::min<float>(2.2e+04f, float(fVslider7))));
		float fSlow11 = fSlow10 * (1.0f / std::max<float>(0.1f, std::min<float>(2.0f, float(fVslider8))) + fSlow10) + 1.0f;
		float fSlow12 = 2.0f / fSlow11;
		float fSlow13 = fSlow10 / fSlow11;
		float fSlow14 = std::tan(fConst2 * std::max<float>(25.0f, std::min<float>(2.2e+04f, float(fVslider9))));
		float fSlow15 = 1.0f / std::max<float>(0.1f, std::min<float>(2.0f, float(fVslider10)));
		float fSlow16 = fSlow14 * (fSlow15 + fSlow14) + 1.0f;
		float fSlow17 = 2.0f / fSlow16;
		float fSlow18 = fSlow14 / fSlow16;
		float fSlow19 = 1.0f / fSlow16;
		int iSlow20 = int(std::min<float>(fConst3, std::max<float>(0.0f, fConst0 * std::max<float>(0.0f, std::min<float>(5.0f, float(fVslider11)))))) + 1;
		float fSlow21 = std::max<float>(0.0f, std::min<float>(0.99f, float(fVslider12)));
		float fSlow22 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider13)));
		float fSlow23 = std::pow(2.0f, 0.083333336f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fVslider14))));
		float fSlow24 = std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider15)));
		float fSlow25 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, float(fVslider16)));
		float fSlow26 = 0.5f * std::cos(fSlow25);
		float fSlow27 = std::max<float>(1.0f, std::min<float>(6e+01f, float(fVslider17)));
		float fSlow28 = std::exp(-(fConst5 / fSlow27));
		float fSlow29 = _Pitch2_faustpower2_f(fSlow28);
		float fSlow30 = 1.0f - fSlow29;
		float fSlow31 = std::cos(fConst6 * std::max<float>(1.5e+03f, std::min<float>(21609.0f, float(fVslider18))));
		float fSlow32 = 1.0f - fSlow31 * fSlow29;
		float fSlow33 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow32) / _Pitch2_faustpower2_f(fSlow30) + -1.0f));
		float fSlow34 = fSlow32 / fSlow30;
		float fSlow35 = fSlow34 - fSlow33;
		float fSlow36 = 1.0f / std::tan(fConst2 * std::max<float>(5e+01f, std::min<float>(1e+03f, float(fVslider19))));
		float fSlow37 = 1.0f - fSlow36;
		float fSlow38 = 1.0f / (fSlow36 + 1.0f);
		float fSlow39 = std::max<float>(1.0f, std::min<float>(6e+01f, float(fVslider20)));
		float fSlow40 = std::exp(-(fConst5 / fSlow39)) / fSlow28 + -1.0f;
		float fSlow41 = fSlow28 * (fSlow33 + (1.0f - fSlow34));
		int iSlow42 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst9 * std::max<float>(0.0f, std::min<float>(1e+02f, float(fVslider21))))));
		float fSlow43 = std::exp(-(fConst12 / fSlow27));
		float fSlow44 = _Pitch2_faustpower2_f(fSlow43);
		float fSlow45 = 1.0f - fSlow44;
		float fSlow46 = 1.0f - fSlow44 * fSlow31;
		float fSlow47 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow46) / _Pitch2_faustpower2_f(fSlow45) + -1.0f));
		float fSlow48 = fSlow46 / fSlow45;
		float fSlow49 = fSlow48 - fSlow47;
		float fSlow50 = std::exp(-(fConst12 / fSlow39)) / fSlow43 + -1.0f;
		float fSlow51 = fSlow43 * (fSlow47 + (1.0f - fSlow48));
		float fSlow52 = std::exp(-(fConst17 / fSlow27));
		float fSlow53 = _Pitch2_faustpower2_f(fSlow52);
		float fSlow54 = 1.0f - fSlow53;
		float fSlow55 = 1.0f - fSlow31 * fSlow53;
		float fSlow56 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow55) / _Pitch2_faustpower2_f(fSlow54) + -1.0f));
		float fSlow57 = fSlow55 / fSlow54;
		float fSlow58 = fSlow57 - fSlow56;
		float fSlow59 = std::exp(-(fConst17 / fSlow39)) / fSlow52 + -1.0f;
		float fSlow60 = fSlow52 * (fSlow56 + (1.0f - fSlow57));
		float fSlow61 = std::exp(-(fConst22 / fSlow27));
		float fSlow62 = _Pitch2_faustpower2_f(fSlow61);
		float fSlow63 = 1.0f - fSlow62;
		float fSlow64 = 1.0f - fSlow31 * fSlow62;
		float fSlow65 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow64) / _Pitch2_faustpower2_f(fSlow63) + -1.0f));
		float fSlow66 = fSlow64 / fSlow63;
		float fSlow67 = fSlow66 - fSlow65;
		float fSlow68 = std::exp(-(fConst22 / fSlow39)) / fSlow61 + -1.0f;
		float fSlow69 = fSlow61 * (fSlow65 + (1.0f - fSlow66));
		float fSlow70 = std::exp(-(fConst27 / fSlow27));
		float fSlow71 = _Pitch2_faustpower2_f(fSlow70);
		float fSlow72 = 1.0f - fSlow71;
		float fSlow73 = 1.0f - fSlow31 * fSlow71;
		float fSlow74 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow73) / _Pitch2_faustpower2_f(fSlow72) + -1.0f));
		float fSlow75 = fSlow73 / fSlow72;
		float fSlow76 = fSlow75 - fSlow74;
		float fSlow77 = std::exp(-(fConst27 / fSlow39)) / fSlow70 + -1.0f;
		float fSlow78 = fSlow70 * (fSlow74 + (1.0f - fSlow75));
		float fSlow79 = std::exp(-(fConst32 / fSlow27));
		float fSlow80 = _Pitch2_faustpower2_f(fSlow79);
		float fSlow81 = 1.0f - fSlow80;
		float fSlow82 = 1.0f - fSlow31 * fSlow80;
		float fSlow83 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow82) / _Pitch2_faustpower2_f(fSlow81) + -1.0f));
		float fSlow84 = fSlow82 / fSlow81;
		float fSlow85 = fSlow84 - fSlow83;
		float fSlow86 = std::exp(-(fConst32 / fSlow39)) / fSlow79 + -1.0f;
		float fSlow87 = fSlow79 * (fSlow83 + (1.0f - fSlow84));
		float fSlow88 = std::exp(-(fConst37 / fSlow27));
		float fSlow89 = _Pitch2_faustpower2_f(fSlow88);
		float fSlow90 = 1.0f - fSlow89;
		float fSlow91 = 1.0f - fSlow31 * fSlow89;
		float fSlow92 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow91) / _Pitch2_faustpower2_f(fSlow90) + -1.0f));
		float fSlow93 = fSlow91 / fSlow90;
		float fSlow94 = fSlow93 - fSlow92;
		float fSlow95 = std::exp(-(fConst37 / fSlow39)) / fSlow88 + -1.0f;
		float fSlow96 = fSlow88 * (fSlow92 + (1.0f - fSlow93));
		float fSlow97 = std::exp(-(fConst42 / fSlow27));
		float fSlow98 = _Pitch2_faustpower2_f(fSlow97);
		float fSlow99 = 1.0f - fSlow98;
		float fSlow100 = 1.0f - fSlow31 * fSlow98;
		float fSlow101 = std::sqrt(std::max<float>(0.0f, _Pitch2_faustpower2_f(fSlow100) / _Pitch2_faustpower2_f(fSlow99) + -1.0f));
		float fSlow102 = fSlow100 / fSlow99;
		float fSlow103 = fSlow102 - fSlow101;
		float fSlow104 = std::exp(-(fConst42 / fSlow39)) / fSlow97 + -1.0f;
		float fSlow105 = fSlow97 * (fSlow101 + (1.0f - fSlow102));
		float fSlow106 = 0.26162952f * std::sin(fSlow25);
		float fSlow107 = std::sin(fSlow0);
		float fSlow108 = 0.70710677f * std::pow(1e+01f, 0.05f * std::max<float>(-3e+01f, std::min<float>(1e+01f, float(fVslider22))));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			iVec1[0] = 1;
			int iTemp1 = 1 - iVec1[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow3 + fRec1[1]);
			fRec1[0] = fTemp2 - std::floor(fTemp2);
			int iTemp3 = std::max<int>(0, std::min<int>(int(65536.0f * fRec1[0]), 65535));
			float fTemp4 = ((iTemp1) ? 0.0f : fSlow7 + fRec3[1]);
			fRec3[0] = fTemp4 - std::floor(fTemp4);
			int iTemp5 = std::max<int>(0, std::min<int>(int(65536.0f * fRec3[0]), 65535));
			float fTemp6 = 1.0f - fSlow8 * (1.0f - ftbl1_Pitch2SIG1[iTemp5]);
			fRec4[0] = std::fmod(fRec4[1] + 2049.0f - fSlow9, 2048.0f);
			float fTemp7 = std::min<float>(0.0009765625f * fRec4[0], 1.0f);
			float fTemp8 = 1.0f - fTemp7;
			float fTemp9 = fSlow1 * fTemp0;
			float fTemp10 = fRec10[1] + fSlow10 * (fTemp9 - fRec11[1]);
			fRec10[0] = fSlow12 * fTemp10 - fRec10[1];
			float fTemp11 = fRec11[1] + fSlow13 * fTemp10;
			fRec11[0] = 2.0f * fTemp11 - fRec11[1];
			float fRec12 = fTemp11;
			float fTemp12 = fRec6[1] + fSlow14 * (fRec12 - fRec7[1]);
			fRec6[0] = fSlow17 * fTemp12 - fRec6[1];
			float fTemp13 = fRec7[1] + fSlow18 * fTemp12;
			fRec7[0] = 2.0f * fTemp13 - fRec7[1];
			float fRec8 = fSlow19 * fTemp12;
			float fRec9 = fTemp13;
			fRec5[IOTA0 & 1048575] = fRec12 + fSlow21 * fRec5[(IOTA0 - iSlow20) & 1048575] - (fRec9 + fSlow15 * fRec8);
			float fTemp14 = fRec4[0] + 2048.0f;
			int iTemp15 = int(fTemp14);
			int iTemp16 = std::min<int>(65537, std::max<int>(0, iTemp15 + 1));
			float fTemp17 = std::floor(fTemp14);
			float fTemp18 = fRec4[0] + (2048.0f - fTemp17);
			float fTemp19 = fTemp17 + (-2047.0f - fRec4[0]);
			int iTemp20 = std::min<int>(65537, std::max<int>(0, iTemp15));
			int iTemp21 = int(fRec4[0]);
			int iTemp22 = std::min<int>(65537, std::max<int>(0, iTemp21 + 1));
			float fTemp23 = std::floor(fRec4[0]);
			float fTemp24 = fRec4[0] - fTemp23;
			float fTemp25 = fTemp23 + (1.0f - fRec4[0]);
			int iTemp26 = std::min<int>(65537, std::max<int>(0, iTemp21));
			float fTemp27 = 1.0f - fSlow8 * (1.0f - ftbl0_Pitch2SIG0[iTemp5]);
			fRec13[0] = std::fmod(fRec13[1] + 2049.0f - fSlow23, 2048.0f);
			float fTemp28 = std::min<float>(0.0009765625f * fRec13[0], 1.0f);
			float fTemp29 = 1.0f - fTemp28;
			float fTemp30 = fRec13[0] + 2048.0f;
			int iTemp31 = int(fTemp30);
			int iTemp32 = std::min<int>(65537, std::max<int>(0, iTemp31 + 1));
			float fTemp33 = std::floor(fTemp30);
			float fTemp34 = fRec13[0] + (2048.0f - fTemp33);
			float fTemp35 = fTemp33 + (-2047.0f - fRec13[0]);
			int iTemp36 = std::min<int>(65537, std::max<int>(0, iTemp31));
			int iTemp37 = int(fRec13[0]);
			int iTemp38 = std::min<int>(65537, std::max<int>(0, iTemp37 + 1));
			float fTemp39 = std::floor(fRec13[0]);
			float fTemp40 = fRec13[0] - fTemp39;
			float fTemp41 = fTemp39 + (1.0f - fRec13[0]);
			int iTemp42 = std::min<int>(65537, std::max<int>(0, iTemp37));
			float fTemp43 = (fSlow24 * ((fRec5[(IOTA0 - iTemp42) & 1048575] * fTemp41 + fTemp40 * fRec5[(IOTA0 - iTemp38) & 1048575]) * fTemp28 + (fRec5[(IOTA0 - iTemp36) & 1048575] * fTemp35 + fTemp34 * fRec5[(IOTA0 - iTemp32) & 1048575]) * fTemp29) * fTemp27 + fSlow22 * ((fRec5[(IOTA0 - iTemp26) & 1048575] * fTemp25 + fTemp24 * fRec5[(IOTA0 - iTemp22) & 1048575]) * fTemp7 + (fRec5[(IOTA0 - iTemp20) & 1048575] * fTemp19 + fTemp18 * fRec5[(IOTA0 - iTemp16) & 1048575]) * fTemp8) * fTemp6) * (fSlow6 + fSlow5 * ftbl0_Pitch2SIG0[iTemp3]);
			fVec3[IOTA0 & 16383] = fTemp43;
			fRec25[0] = -(fSlow38 * (fSlow37 * fRec25[1] - (fRec18[1] + fRec18[2])));
			fRec24[0] = fSlow41 * (fRec18[1] + fSlow40 * fRec25[0]) + fSlow35 * fRec24[1];
			fVec4[IOTA0 & 16383] = 0.35355338f * fRec24[0] + 1e-20f;
			float fTemp44 = 0.21213204f * fVec3[(IOTA0 - iSlow42) & 16383];
			float fTemp45 = fTemp44 + fVec4[(IOTA0 - iConst8) & 16383] - 0.6f * fRec22[1];
			fVec5[IOTA0 & 2047] = fTemp45;
			fRec22[0] = fVec5[(IOTA0 - iConst10) & 2047];
			float fRec23 = 0.6f * fTemp45;
			fRec29[0] = -(fSlow38 * (fSlow37 * fRec29[1] - (fRec14[1] + fRec14[2])));
			fRec28[0] = fSlow51 * (fRec14[1] + fSlow50 * fRec29[0]) + fSlow49 * fRec28[1];
			fVec6[IOTA0 & 16383] = 0.35355338f * fRec28[0] + 1e-20f;
			float fTemp46 = fVec6[(IOTA0 - iConst14) & 16383] + fTemp44 - 0.6f * fRec26[1];
			fVec7[IOTA0 & 2047] = fTemp46;
			fRec26[0] = fVec7[(IOTA0 - iConst15) & 2047];
			float fRec27 = 0.6f * fTemp46;
			float fTemp47 = fRec27 + fRec23;
			fRec33[0] = -(fSlow38 * (fSlow37 * fRec33[1] - (fRec16[1] + fRec16[2])));
			fRec32[0] = fSlow60 * (fRec16[1] + fSlow59 * fRec33[0]) + fSlow58 * fRec32[1];
			fVec8[IOTA0 & 16383] = 0.35355338f * fRec32[0] + 1e-20f;
			float fTemp48 = fVec8[(IOTA0 - iConst19) & 16383] - (fTemp44 + 0.6f * fRec30[1]);
			fVec9[IOTA0 & 4095] = fTemp48;
			fRec30[0] = fVec9[(IOTA0 - iConst20) & 4095];
			float fRec31 = 0.6f * fTemp48;
			fRec37[0] = -(fSlow38 * (fSlow37 * fRec37[1] - (fRec20[1] + fRec20[2])));
			fRec36[0] = fSlow69 * (fRec20[1] + fSlow68 * fRec37[0]) + fSlow67 * fRec36[1];
			fVec10[IOTA0 & 16383] = 0.35355338f * fRec36[0] + 1e-20f;
			float fTemp49 = fVec10[(IOTA0 - iConst24) & 16383] - (fTemp44 + 0.6f * fRec34[1]);
			fVec11[IOTA0 & 2047] = fTemp49;
			fRec34[0] = fVec11[(IOTA0 - iConst25) & 2047];
			float fRec35 = 0.6f * fTemp49;
			float fTemp50 = fRec35 + fRec31 + fTemp47;
			fRec41[0] = -(fSlow38 * (fSlow37 * fRec41[1] - (fRec15[1] + fRec15[2])));
			fRec40[0] = fSlow78 * (fRec15[1] + fSlow77 * fRec41[0]) + fSlow76 * fRec40[1];
			fVec12[IOTA0 & 32767] = 0.35355338f * fRec40[0] + 1e-20f;
			float fTemp51 = float(input1[i0]);
			float fTemp52 = fSlow1 * fTemp51;
			float fTemp53 = fRec47[1] + fSlow10 * (fTemp52 - fRec48[1]);
			fRec47[0] = fSlow12 * fTemp53 - fRec47[1];
			float fTemp54 = fRec48[1] + fSlow13 * fTemp53;
			fRec48[0] = 2.0f * fTemp54 - fRec48[1];
			float fRec49 = fTemp54;
			float fTemp55 = fRec43[1] + fSlow14 * (fRec49 - fRec44[1]);
			fRec43[0] = fSlow17 * fTemp55 - fRec43[1];
			float fTemp56 = fRec44[1] + fSlow18 * fTemp55;
			fRec44[0] = 2.0f * fTemp56 - fRec44[1];
			float fRec45 = fSlow19 * fTemp55;
			float fRec46 = fTemp56;
			fRec42[IOTA0 & 1048575] = fRec49 + fSlow21 * fRec42[(IOTA0 - iSlow20) & 1048575] - (fRec46 + fSlow15 * fRec45);
			float fTemp57 = (fSlow24 * fTemp6 * (fTemp28 * (fTemp41 * fRec42[(IOTA0 - iTemp42) & 1048575] + fTemp40 * fRec42[(IOTA0 - iTemp38) & 1048575]) + fTemp29 * (fTemp35 * fRec42[(IOTA0 - iTemp36) & 1048575] + fTemp34 * fRec42[(IOTA0 - iTemp32) & 1048575])) + fSlow22 * fTemp27 * (fTemp7 * (fTemp25 * fRec42[(IOTA0 - iTemp26) & 1048575] + fTemp24 * fRec42[(IOTA0 - iTemp22) & 1048575]) + fTemp8 * (fTemp19 * fRec42[(IOTA0 - iTemp20) & 1048575] + fTemp18 * fRec42[(IOTA0 - iTemp16) & 1048575]))) * (fSlow6 + fSlow5 * ftbl1_Pitch2SIG1[iTemp3]);
			fVec13[IOTA0 & 16383] = fTemp57;
			float fTemp58 = 0.21213204f * fVec13[(IOTA0 - iSlow42) & 16383];
			float fTemp59 = fTemp58 + 0.6f * fRec38[1] + fVec12[(IOTA0 - iConst29) & 32767];
			fVec14[IOTA0 & 4095] = fTemp59;
			fRec38[0] = fVec14[(IOTA0 - iConst30) & 4095];
			float fRec39 = -(0.6f * fTemp59);
			fRec53[0] = -(fSlow38 * (fSlow37 * fRec53[1] - (fRec19[1] + fRec19[2])));
			fRec52[0] = fSlow87 * (fRec19[1] + fSlow86 * fRec53[0]) + fSlow85 * fRec52[1];
			fVec15[IOTA0 & 16383] = 0.35355338f * fRec52[0] + 1e-20f;
			float fTemp60 = fVec15[(IOTA0 - iConst34) & 16383] + fTemp58 + 0.6f * fRec50[1];
			fVec16[IOTA0 & 4095] = fTemp60;
			fRec50[0] = fVec16[(IOTA0 - iConst35) & 4095];
			float fRec51 = -(0.6f * fTemp60);
			fRec57[0] = -(fSlow38 * (fSlow37 * fRec57[1] - (fRec17[1] + fRec17[2])));
			fRec56[0] = fSlow96 * (fRec17[1] + fSlow95 * fRec57[0]) + fSlow94 * fRec56[1];
			fVec17[IOTA0 & 32767] = 0.35355338f * fRec56[0] + 1e-20f;
			float fTemp61 = 0.6f * fRec54[1] + fVec17[(IOTA0 - iConst39) & 32767];
			fVec18[IOTA0 & 4095] = fTemp61 - fTemp58;
			fRec54[0] = fVec18[(IOTA0 - iConst40) & 4095];
			float fRec55 = 0.6f * (fTemp58 - fTemp61);
			fRec61[0] = -(fSlow38 * (fSlow37 * fRec61[1] - (fRec21[1] + fRec21[2])));
			fRec60[0] = fSlow105 * (fRec21[1] + fSlow104 * fRec61[0]) + fSlow103 * fRec60[1];
			fVec19[IOTA0 & 32767] = 0.35355338f * fRec60[0] + 1e-20f;
			float fTemp62 = 0.6f * fRec58[1] + fVec19[(IOTA0 - iConst44) & 32767];
			fVec20[IOTA0 & 2047] = fTemp62 - fTemp58;
			fRec58[0] = fVec20[(IOTA0 - iConst45) & 2047];
			float fRec59 = 0.6f * (fTemp58 - fTemp62);
			fRec14[0] = fRec58[1] + fRec54[1] + fRec50[1] + fRec38[1] + fRec34[1] + fRec30[1] + fRec22[1] + fRec26[1] + fRec59 + fRec55 + fRec51 + fRec39 + fTemp50;
			fRec15[0] = fRec34[1] + fRec30[1] + fRec22[1] + fRec26[1] + fTemp50 - (fRec58[1] + fRec54[1] + fRec50[1] + fRec38[1] + fRec59 + fRec55 + fRec39 + fRec51);
			float fTemp63 = fRec31 + fRec35;
			fRec16[0] = fRec50[1] + fRec38[1] + fRec22[1] + fRec26[1] + fRec51 + fRec39 + fTemp47 - (fRec58[1] + fRec54[1] + fRec34[1] + fRec30[1] + fRec59 + fRec55 + fTemp63);
			fRec17[0] = fRec58[1] + fRec54[1] + fRec22[1] + fRec26[1] + fRec59 + fRec55 + fTemp47 - (fRec50[1] + fRec38[1] + fRec34[1] + fRec30[1] + fRec51 + fRec39 + fTemp63);
			float fTemp64 = fRec23 + fRec35;
			float fTemp65 = fRec27 + fRec31;
			fRec18[0] = fRec54[1] + fRec38[1] + fRec30[1] + fRec26[1] + fRec55 + fRec39 + fTemp65 - (fRec58[1] + fRec50[1] + fRec34[1] + fRec22[1] + fRec59 + fRec51 + fTemp64);
			fRec19[0] = fRec58[1] + fRec50[1] + fRec30[1] + fRec26[1] + fRec59 + fRec51 + fTemp65 - (fRec54[1] + fRec38[1] + fRec34[1] + fRec22[1] + fRec55 + fRec39 + fTemp64);
			float fTemp66 = fRec23 + fRec31;
			float fTemp67 = fRec27 + fRec35;
			fRec20[0] = fRec58[1] + fRec38[1] + fRec34[1] + fRec26[1] + fRec59 + fRec39 + fTemp67 - (fRec54[1] + fRec50[1] + fRec30[1] + fRec22[1] + fRec55 + fRec51 + fTemp66);
			fRec21[0] = fRec54[1] + fRec50[1] + fRec34[1] + fRec26[1] + fRec55 + fRec51 + fTemp67 - (fRec58[1] + fRec38[1] + fRec30[1] + fRec22[1] + fRec59 + fRec39 + fTemp66);
			output0[i0] = FAUSTFLOAT(fSlow108 * (fSlow107 * (fSlow106 * (fRec15[0] + fRec16[0]) + fSlow26 * fTemp43) + fSlow2 * fTemp0));
			output1[i0] = FAUSTFLOAT(fSlow108 * (fSlow107 * (fSlow106 * (fRec15[0] - fRec16[0]) + fSlow26 * fTemp57) + fSlow2 * fTemp51));
			iVec1[1] = iVec1[0];
			fRec1[1] = fRec1[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec6[1] = fRec6[0];
			fRec7[1] = fRec7[0];
			IOTA0 = IOTA0 + 1;
			fRec13[1] = fRec13[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fRec22[1] = fRec22[0];
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
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
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
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
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

	FAUST_ADDVERTICALSLIDER("[0]Mix/Mix", fVslider0, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[0]Mix/Pre Gain", fVslider1, 0.0f, -3e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("[0]Mix/Post Gain", fVslider22, 0.0f, -3e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Low decay", fVslider20, 3.7f, 1.0f, 6e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/LF Crossover", fVslider19, 4.4e+02f, 5e+01f, 1e+03f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Mid Decay", fVslider17, 4.68f, 1.0f, 6e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/HF Damping", fVslider18, 8.6e+03f, 1.5e+03f, 21609.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Reverb Delay", fVslider21, 0.0f, 0.0f, 1e+02f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[1]Reverb/Reverb Mix", fVslider16, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[2]Echo/Delay", fVslider11, 0.5f, 0.0f, 5.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[2]Echo/Feedback", fVslider12, 0.5f, 0.0f, 0.99f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Lowpass", fVslider7, 1.8e+04f, 25.0f, 2.2e+04f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Lowpass Q", fVslider8, 0.71f, 0.1f, 2.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Highpass", fVslider9, 2.5e+02f, 25.0f, 2.2e+04f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[3]Filter/Highpass Q", fVslider10, 0.71f, 0.1f, 2.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch A", fVslider14, 12.0f, -12.0f, 12.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch A Mix", fVslider15, 0.6f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch B", fVslider6, 5.0f, -12.0f, 12.0f, 1.0f);
	FAUST_ADDVERTICALSLIDER("[4]Pitch/Pitch B Mix", fVslider13, 0.6f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Pitch Mod Rate", fVslider4, 3.1f, 0.01f, 1e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Pitch Mod Mix", fVslider5, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Volume Mod Rate", fVslider2, 3.1f, 0.01f, 1e+01f, 0.01f);
	FAUST_ADDVERTICALSLIDER("[5]Mod/Volume Mod Mix", fVslider3, 1.0f, 0.0f, 1.0f, 0.01f);

	#define FAUST_LIST_ACTIVES(p) \
		p(VERTICALSLIDER, Mix, "[0]Mix/Mix", fVslider0, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pre_Gain, "[0]Mix/Pre Gain", fVslider1, 0.0f, -3e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Post_Gain, "[0]Mix/Post Gain", fVslider22, 0.0f, -3e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Low_decay, "[1]Reverb/Low decay", fVslider20, 3.7f, 1.0f, 6e+01f, 0.01f) \
		p(VERTICALSLIDER, LF_Crossover, "[1]Reverb/LF Crossover", fVslider19, 4.4e+02f, 5e+01f, 1e+03f, 1.0f) \
		p(VERTICALSLIDER, Mid_Decay, "[1]Reverb/Mid Decay", fVslider17, 4.68f, 1.0f, 6e+01f, 0.01f) \
		p(VERTICALSLIDER, HF_Damping, "[1]Reverb/HF Damping", fVslider18, 8.6e+03f, 1.5e+03f, 21609.0f, 1.0f) \
		p(VERTICALSLIDER, Reverb_Delay, "[1]Reverb/Reverb Delay", fVslider21, 0.0f, 0.0f, 1e+02f, 0.01f) \
		p(VERTICALSLIDER, Reverb_Mix, "[1]Reverb/Reverb Mix", fVslider16, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Delay, "[2]Echo/Delay", fVslider11, 0.5f, 0.0f, 5.0f, 0.01f) \
		p(VERTICALSLIDER, Feedback, "[2]Echo/Feedback", fVslider12, 0.5f, 0.0f, 0.99f, 0.01f) \
		p(VERTICALSLIDER, Lowpass, "[3]Filter/Lowpass", fVslider7, 1.8e+04f, 25.0f, 2.2e+04f, 0.01f) \
		p(VERTICALSLIDER, Lowpass_Q, "[3]Filter/Lowpass Q", fVslider8, 0.71f, 0.1f, 2.0f, 0.01f) \
		p(VERTICALSLIDER, Highpass, "[3]Filter/Highpass", fVslider9, 2.5e+02f, 25.0f, 2.2e+04f, 0.01f) \
		p(VERTICALSLIDER, Highpass_Q, "[3]Filter/Highpass Q", fVslider10, 0.71f, 0.1f, 2.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_A, "[4]Pitch/Pitch A", fVslider14, 12.0f, -12.0f, 12.0f, 1.0f) \
		p(VERTICALSLIDER, Pitch_A_Mix, "[4]Pitch/Pitch A Mix", fVslider15, 0.6f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_B, "[4]Pitch/Pitch B", fVslider6, 5.0f, -12.0f, 12.0f, 1.0f) \
		p(VERTICALSLIDER, Pitch_B_Mix, "[4]Pitch/Pitch B Mix", fVslider13, 0.6f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Pitch_Mod_Rate, "[5]Mod/Pitch Mod Rate", fVslider4, 3.1f, 0.01f, 1e+01f, 0.01f) \
		p(VERTICALSLIDER, Pitch_Mod_Mix, "[5]Mod/Pitch Mod Mix", fVslider5, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(VERTICALSLIDER, Volume_Mod_Rate, "[5]Mod/Volume Mod Rate", fVslider2, 3.1f, 0.01f, 1e+01f, 0.01f) \
		p(VERTICALSLIDER, Volume_Mod_Mix, "[5]Mod/Volume Mod Mix", fVslider3, 1.0f, 0.0f, 1.0f, 0.01f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
