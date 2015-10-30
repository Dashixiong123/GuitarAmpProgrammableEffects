/**
 * @brief [Filter was designed for a stop of 1K, pass 1.1K to 5K and stop by 5.1K]
 */

#ifndef IIR_HIGH_H
#define IIR_HIGH_H


#define HIGH_SECTIONS 12


float iir_high_coefs[HIGH_SECTIONS * 5] = {
	0.905280, -1.399233, 0.905280, -1.578551, 0.988842,
	0.905280, -1.794869, 0.905280, -1.978167, 0.997447,
	0.927065, -1.404531, 0.927065, -1.588797, 0.973157,
	0.927065, -1.839200, 0.927065, -1.972957, 0.993458,
	0.844909, -1.206080, 0.844909, -1.613554, 0.943578,
	0.844909, -1.678571, 0.844909, -1.960362, 0.984074,
	0.684614, -0.767408, 0.684614, -1.664436, 0.902026,
	0.684614, -1.363815, 0.684614, -1.929520, 0.962101,
	0.535401, 0.288344, 0.535401, -1.752989, 0.882496,
	0.535401, -1.070115, 0.535401, -1.859864, 0.919028,
	0.063648, -0.099029, 0.063648, -1.576467, 0.997010,
	0.063648, -0.126164, 0.063648, -1.980471, 0.999332
};

#endif