class cTab_RscText{};
class cTab_RscText_TAD: cTab_RscText{};
class cTab_TAD_OSD_hookGrid: cTab_RscText_TAD{};
class cTab_RscMapControl {
	class LineMarker {
		lineWidthThin = 0.008;
		lineWidthThick = 0.014;
		lineLengthMin = 5;
		lineDistanceMin = 3e-005;
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	};
};
class cTab_TAD_OSD_hookElevation: cTab_TAD_OSD_hookGrid {
	w = "(((28) * 4) / 2048  *  (safezoneH * 0.8 * 3/4))";
};
class cTab_TAD_OSD_hookDir: cTab_TAD_OSD_hookGrid {
	w = "(((30) * 8) / 2048  *  (safezoneH * 0.8 * 3/4))";
};
