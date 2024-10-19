# pythonの勉強

road_geometry = {0:"Road place",
					1:"Intersection-others",
					7:"Near the intersection-others",
					11:"Single road-Tunnel",
					12:"Single road-Bridge",
					13:"Single road-Curve・Turning",
					14:"Single road-Others",
					21:"Railroad crossing-Type1",
					22:"Railroad crossing-Type2",
					23:"Railroad crossing-Type3",
					31:"Intersection-Roundabout circulation",
					37:"Near the intersection-Near the roundabout circulation",
					}

traffic_light = {1:"Lighting up-Triple lamp type",
					2:"Lighting up-Push‐button traffic light",
					3:"Blinking-Triple lamp type",
					4:"Blinking-Single lamp type",
					5:"Lighting out",
					6:"Breakdown",
					7:"No traffic lights",
					8:"Lighting up-Pedestrian-vehicle separated　type"
					}

road_ali = {0:"Road place",
					1:"Curve・Turning-Right-Uphill",
					2:"Curve・Turning-Right-Downhill",
					3:"Curve・Turning-Right-Flat",
					4:"Curve・Turning-Left-Uphill",
					5:"Curve・Turning-Left-Downhill",
					6:"Curve・Turning-Left-Flat",
					7:"Straight-Uphill",
					8:"Straight-Downhill",
					9:"Straight-Flat",
					}

pd_division = {1:"With classification-Safety fence etc.",
					2:"With classification-Curb・Block etc.",
					3:"With classification-Roadside",
					4:"Without classification"
					}

median_strip = {0:"Road place",
					1:"Central reserve",
					2:"Center lane-High brightness",
					3:"Center lane-Chatter bar etc.",
					4:"Center lane-Paint",
					5:"No central reserve",
					6:"Center lane-Rubber pole",
					7:"Center lane-Wire rope",
					}

lane_width = {0:"Road place",
					1:"Single road-Less than 3.5m",
					2:"Single road-Below 3.5m",
					3:"Single road-3.5m　or more",
					4:"Single road-9.0m　or more",
					5:"Single road-13.0m　or more",
					6:"Single road-19.5m　or more",
					11:"Lighting up-Small(Less than 5.5m)-Small",
					12:"Lighting up-Medium(5.5m or more)-Small",
					13:"Lighting up-Large(13.0m or more)-Small",
					14:"Lighting up-Medium(5.5m or more)-Small",
					15:"Lighting up-Medium(5.5m or more)-Medium",
					16:"Lighting up-Large(13.0m or more)-Medium",
					17:"Lighting up-Large(13.0m or more)-Small",
					18:"Lighting up-Large(13.0m or more)-Medium",
					19:"Lighting up-Large(13.0m or more)-Large",
					}

# 数値データをディクショナリを使ってデコードする
df['traffic_light_decoded'] = df['traffic_light'].map(traffic_light)

# 結果の確認
print(df[['traffic_light', 'traffic_light_decoded']])
