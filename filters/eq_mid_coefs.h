/**
 * @brief [This filter was designed using a kaiser window with a beta of 2.
 * The cutoff was defined at 1050Hz with 501 coefficents]
 */


/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.3 and the Signal Processing Toolbox 6.21.
 * Generated on: 07-Nov-2015 17:03:16
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 501
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */


int eq_mid_num = 501;
float eq_mid_coefs[501] = {
     0.000108112803525203227095717595229729113,
     0.000183749631116565968541251563372895816,
     0.000257673664698080686318026888415033682,
     0.000328411874632657230753396415678935227,
     0.000394518134766574100121688806197539634,
     0.000454602094577485080564849262430016097,
     0.000507357625884148817109464690844333745,
     0.000551590275309068100648146604214616673,
     0.000586243160650398655205084441632834569,
     0.000610420767533728170564644166518064594,
     0.000623410132055227561749533027324332579,
     0.000624698935248740893667884765960707227,
     0.000613990085544666966584081979618758851,
     0.000591212425157407682994870068426962462,
     0.000556527264557906309501433828046401686,
     0.000510330524688378927428145104272516619,
     0.000453250348020013183771015352618860561,
     0.000386140125459062504009732919030284393,
     0.000310066974871946632492936135605532399,
     0.0002262957969369902772645980482124628  ,
     0.000136269123392875052399805801961463203,
     0.000041583059772099072572224681687558245,
    -0.000056040292377582640135236929923578941,
    -0.00015478347168316585868302892592396347 ,
    -0.000252766819799911683554899388681747041,
    -0.000348083578503053357473123741172571499,
    -0.00043883627825748461066118766282784236 ,
    -0.000523173736710741714081573938699420978,
    -0.000599327959294446263767419669221681033,
    -0.000665650221161244101675258377781574382,
    -0.000720645610550986188795608011758986322,
    -0.000763005328631860741707415574097694844,
    -0.000791636069890460465289794278476165346,
    -0.000805685849963423748702762150486478276,
    -0.000804565703851261161509700325922267439,
    -0.00078796674590140625745599001206187495 ,
    -0.000755872162702514427921884898609050651,
    -0.000708563799763748444066058240764505172,
    -0.000646623101008341914439081499210715265,
    -0.000570926264942791259274224024977684167,
    -0.000482633590959779862263751004647360787,
    -0.000383173101553307483054661153332176582,
    -0.000274218639134083069872765969776651218,
    -0.000157662747445638161359823814500202843,
    -0.000035584755099834862847665850615896943,
     0.000089785419692157554896229376684146928,
     0.000216107130610833613870019886959994437,
     0.000340971834878403090400567077011828587,
     0.000461948127367883007530352523772876339,
     0.00057662815129834953629950344833332565 ,
     0.000682674516327045764925440796133671029,
     0.00077786682751614219435282171488665881 ,
     0.000860146918144223519321622806188543109,
     0.000927661886178312569337101045618965145,
     0.000978804058624752840872540460281925334,
     0.001012247049803222716940487302395013103,
     0.001026977138363281217073308404508225067,
     0.001022319262776958661773085701440777484,
     0.000997957024955020959716689432639213919,
     0.000953946195098786956304004469586743653,
     0.000890721326174332144083589657412858287,
     0.000809095211481369652392614533198411664,
     0.000710251051457741781544608095089188282,
     0.000595727333696912547157664707953017569,
     0.000467395570600371700487746240426645272,
     0.000327431179480497348225492837414662972,
     0.000178277927566126135651425332895314568,
     0.000022606496538775509733219110097834914,
    -0.000136732154707389292388336476946619769,
    -0.000296757836975038461965747949022897956,
    -0.00045441569485869478563222489952977412 ,
    -0.000606633310377126971392469645394385225,
    -0.000750379300469695151645788122607427795,
    -0.000882722313427126330578897928091919312,
    -0.001000889300142004164489994977316200675,
    -0.001102321927888254369382048380998639914,
    -0.001184730017726368924910196334110423777,
    -0.001246140921731073809494705351141874416,
    -0.001284943812787356278576345047781614994,
    -0.001299927937019290701339824245508225431,
    -0.001290313975913833432693222924569909082,
    -0.001255777780391829087994204350309246365,
    -0.001196465870598564231949700875645703491,
    -0.001113002240827411053192275147694090265,
    -0.001006486166233206249256970643557451695,
    -0.000878480874049930365518590313911317935,
    -0.000730993113893695241854719935048478874,
    -0.000566443836234581388211495323048438877,
    -0.000387630361979591456667720850148839418,
    -0.000197680595995238775255259389140860549,
     0.000000000000000001249617663552301259512,
     0.00020178780766143828285900940766595113 ,
     0.000403905819380529602317247972464997474,
     0.0006024926448361722424937325648386377  ,
     0.00079367452595249191743542738208816445 ,
     0.000973639048091643724731902853619658345,
     0.001138709177313391301966660762445826549,
     0.001285416220468320195116640469734647922,
     0.001410570297851853087053863866628944379,
     0.001511326937751423290373642416284383216,
     0.001585248448595177536701861242818267783,
     0.001630358797178384656217930981370045629,
     0.001645190819717476556072188742518846993,
     0.001628824714876838351818033601148272282,
     0.001580916912564281654948739053168083046,
     0.001501718576877183151940808869539978332,
     0.001392083183363572061394530798850155406,
     0.00125346280662781955211881879108659632 ,
     0.001087892960823486554131078740681459749,
     0.000897966049038522958793129280508082957,
     0.000686793694093628163087339455472601912,
     0.000457958438819819628647078690875105167,
     0.000215455514377112114857149016700077482,
    -0.000036374423434406564289034929915445105,
    -0.000292920501596294292814132154134654229,
    -0.000549383521279144383490933289948543461,
    -0.000800863122405055891800396139501572179,
    -0.001042448683058825936384450550065139396,
    -0.001269312314407734527260673829118786671,
    -0.001476802239588183860222181387200635072,
    -0.001660534803541688451261615355747380818,
    -0.001816483351385879191006167410193938849,
    -0.001941062236365235669707796084537676506,
    -0.002031204274920187305419894130409375066,
    -0.002084430055505362856110851410562645469,
    -0.002098907628427654215030884188308846205,
    -0.002073501254503357354302961468306421011,
    -0.002007808068506397852076572618784666702,
    -0.001902181716396698875001791684269392135,
    -0.001757742249866758648887965499341135001,
    -0.00157637180405365722769828185079177274 ,
    -0.001360695840163522393750916705812414875,
    -0.001114049999748976732191763083790192468,
    -0.000840432886721269550682478222114468736,
    -0.00054444536195551900600170247557230141 ,
    -0.000231217198569732467015175325641962445,
     0.000093677801351504106416173689453330553,
     0.000424316890530646885753424113474352453,
     0.000754532105502861254187063622111963923,
     0.001078020892849170745547704441946734732,
     0.001388461720399218916541239643436256301,
     0.001679632628943958459061258636779712106,
     0.001945530582887909382822089199294168793,
     0.002180489418702247651077330559132860799,
     0.002379294169818396871562971028879474034,
     0.00253728956684473290830728053890652518 ,
     0.002650480573091764779219969838663928385,
     0.002715622917009483973382888422065661871,
     0.002730301724184546613427571060128684621,
     0.002692996530184132725899148752546352625,
     0.002603131169221315193568200285767488822,
     0.00246110727912193100186399874473863747 ,
     0.00226832043652884724274643168939746829 ,
     0.002027158233242285986785979901014798088,
     0.001740979920116320078804506010783370584,
     0.001414077573638773113393063418641304452,
     0.001051619076508571561448524001036730624,
     0.000659573541249145107491502759700097158,
     0.000244620139084111387454967267984784485,
    -0.000185958381146610865659873912392185957,
    -0.000624395893350506120227094708496906605,
    -0.001062574939715188199890194553631772578,
    -0.001492168491856181097854339157038339181,
    -0.001904789075682303137529438608055443183,
    -0.002292142723444186985792825339558476117,
    -0.00264618507351269474647814661238953704 ,
    -0.002959276840568706486850336645488823706,
    -0.003224335828662231763497292291731355363,
    -0.003434982658800755320888109523025377712,
    -0.003585677432287828151485920002983220911,
    -0.003671844651008290306981596273772083805,
    -0.003689983865406721089130748225670686224,
    -0.003637763718298523980126946142377164506,
    -0.003514097295280358204672133126678090775,
    -0.00331919697691695830474301054380248388 ,
    -0.003054607309828518291877630375097396609,
    -0.002723214768308067617458290143872545741,
    -0.002329233659529078917516109470398077974,
    -0.001878167827559689643385221202720458678,
    -0.001376748227619282918116061509294922871,
    -0.000832846865275974827629024144215463821,
    -0.00025536801833637637467941394753268014 ,
     0.000345881925345941124930876364729215311,
     0.000960344280371720759870157735349494033,
     0.001576875414428808696437611658325295139,
     0.002183929175547031590470803408265965118,
     0.002769751620750243725765926683379802853,
     0.003322584998804970542879422268356393033,
     0.003830877714725250231253550481369529734,
     0.00428349683035500299055353679023028235 ,
     0.004669939537555404390767321842758974526,
     0.004980539981221925732723931901091418695,
     0.005206667810523388749410766962455454632,
     0.00534091489936995480330983454564375279 ,
     0.005377266801109051828910789794235824957,
     0.005311255686702555031675210273078846512,
     0.005140091757989688654728599459531324101,
     0.004862770424903502773650298962593296892,
     0.004480152883518646531046947245613409905,
     0.00399501812547841186895603016182576539 ,
     0.003412084842749402071454545293249793758,
     0.002738002158097926908020269820553949103,
     0.001981308603842463645500204805216526438,
     0.001152359281447142653684312385564680881,
     0.000263221654118747292166319295958487601,
    -0.000672459054778694310071374129478272152,
    -0.0016396233716275976106252487696224307  ,
    -0.00262198800810008745068580005010971945 ,
    -0.003602260767550935927766575517239289184,
    -0.004562377028214732906097328424266379443,
    -0.00548375451046143047584280338924145326 ,
    -0.006347562684328611308515188937917628209,
    -0.007135002876571810460915035179141341359,
    -0.007827594899120236815459605850264779292,
    -0.008407465847726010299556520521946367808,
    -0.008857636614364294141976685637018817943,
    -0.009162301622103309270417348386672529159,
    -0.009307097328100014457796795852573268348,
    -0.009279355149297783753037371923255705042,
    -0.009068334645326340051618707605030067498,
    -0.008665433041869164548787196622470219154,
    -0.008064367492051926350482560224008921068,
    -0.007261326848789690681373887315430692979,
    -0.006255090152038433534698036453391978284,
    -0.0050471095150957526534463148948361777  ,
    -0.003641555616191063764197632934838111396,
    -0.002045324557558422014919008447009218798,
    -0.000268005435337289091811407981680304147,
     0.001678191439137128237665819163737523922,
     0.003778545122275626597097009096160036279,
     0.006015972280252732985739161364335814142,
     0.008371211356859279903441795056551200105,
     0.010823040368066539837488271302845532773,
     0.013348525489707729202448760474908340257,
     0.015923297110373390433890605777378368657,
     0.018521849575619461769626639124908251688,
     0.021117860459306983522687062304612481967,
     0.023684524869873092162153582762584846932,
     0.026194900039136187475108386024658102542,
     0.02862225525335470449617147892240609508 ,
     0.030940422074025843157674131589374155737,
     0.033124139761452897623428270890144631267,
     0.035149390858306116258713558408999233507,
     0.036993722012855861924762734815885778517,
     0.038636545320612156184658658730768365785,
     0.040059415735858708296213137600716436282,
     0.041246280446921981810426416359405266121,
     0.042183696515737861831851773786183912307,
     0.042861013547084172992107653499260777608,
     0.043270518668510206394817174668787629344,
     0.043407541660451673393161797775974264368,
     0.043270518668510206394817174668787629344,
     0.042861013547084172992107653499260777608,
     0.042183696515737861831851773786183912307,
     0.041246280446921981810426416359405266121,
     0.040059415735858708296213137600716436282,
     0.038636545320612156184658658730768365785,
     0.036993722012855861924762734815885778517,
     0.035149390858306116258713558408999233507,
     0.033124139761452897623428270890144631267,
     0.030940422074025843157674131589374155737,
     0.02862225525335470449617147892240609508 ,
     0.026194900039136187475108386024658102542,
     0.023684524869873092162153582762584846932,
     0.021117860459306983522687062304612481967,
     0.018521849575619461769626639124908251688,
     0.015923297110373390433890605777378368657,
     0.013348525489707729202448760474908340257,
     0.010823040368066539837488271302845532773,
     0.008371211356859279903441795056551200105,
     0.006015972280252732985739161364335814142,
     0.003778545122275626597097009096160036279,
     0.001678191439137128237665819163737523922,
    -0.000268005435337289091811407981680304147,
    -0.002045324557558422014919008447009218798,
    -0.003641555616191063764197632934838111396,
    -0.0050471095150957526534463148948361777  ,
    -0.006255090152038433534698036453391978284,
    -0.007261326848789690681373887315430692979,
    -0.008064367492051926350482560224008921068,
    -0.008665433041869164548787196622470219154,
    -0.009068334645326340051618707605030067498,
    -0.009279355149297783753037371923255705042,
    -0.009307097328100014457796795852573268348,
    -0.009162301622103309270417348386672529159,
    -0.008857636614364294141976685637018817943,
    -0.008407465847726010299556520521946367808,
    -0.007827594899120236815459605850264779292,
    -0.007135002876571810460915035179141341359,
    -0.006347562684328611308515188937917628209,
    -0.00548375451046143047584280338924145326 ,
    -0.004562377028214732906097328424266379443,
    -0.003602260767550935927766575517239289184,
    -0.00262198800810008745068580005010971945 ,
    -0.0016396233716275976106252487696224307  ,
    -0.000672459054778694310071374129478272152,
     0.000263221654118747292166319295958487601,
     0.001152359281447142653684312385564680881,
     0.001981308603842463645500204805216526438,
     0.002738002158097926908020269820553949103,
     0.003412084842749402071454545293249793758,
     0.00399501812547841186895603016182576539 ,
     0.004480152883518646531046947245613409905,
     0.004862770424903502773650298962593296892,
     0.005140091757989688654728599459531324101,
     0.005311255686702555031675210273078846512,
     0.005377266801109051828910789794235824957,
     0.00534091489936995480330983454564375279 ,
     0.005206667810523388749410766962455454632,
     0.004980539981221925732723931901091418695,
     0.004669939537555404390767321842758974526,
     0.00428349683035500299055353679023028235 ,
     0.003830877714725250231253550481369529734,
     0.003322584998804970542879422268356393033,
     0.002769751620750243725765926683379802853,
     0.002183929175547031590470803408265965118,
     0.001576875414428808696437611658325295139,
     0.000960344280371720759870157735349494033,
     0.000345881925345941124930876364729215311,
    -0.00025536801833637637467941394753268014 ,
    -0.000832846865275974827629024144215463821,
    -0.001376748227619282918116061509294922871,
    -0.001878167827559689643385221202720458678,
    -0.002329233659529078917516109470398077974,
    -0.002723214768308067617458290143872545741,
    -0.003054607309828518291877630375097396609,
    -0.00331919697691695830474301054380248388 ,
    -0.003514097295280358204672133126678090775,
    -0.003637763718298523980126946142377164506,
    -0.003689983865406721089130748225670686224,
    -0.003671844651008290306981596273772083805,
    -0.003585677432287828151485920002983220911,
    -0.003434982658800755320888109523025377712,
    -0.003224335828662231763497292291731355363,
    -0.002959276840568706486850336645488823706,
    -0.00264618507351269474647814661238953704 ,
    -0.002292142723444186985792825339558476117,
    -0.001904789075682303137529438608055443183,
    -0.001492168491856181097854339157038339181,
    -0.001062574939715188199890194553631772578,
    -0.000624395893350506120227094708496906605,
    -0.000185958381146610865659873912392185957,
     0.000244620139084111387454967267984784485,
     0.000659573541249145107491502759700097158,
     0.001051619076508571561448524001036730624,
     0.001414077573638773113393063418641304452,
     0.001740979920116320078804506010783370584,
     0.002027158233242285986785979901014798088,
     0.00226832043652884724274643168939746829 ,
     0.00246110727912193100186399874473863747 ,
     0.002603131169221315193568200285767488822,
     0.002692996530184132725899148752546352625,
     0.002730301724184546613427571060128684621,
     0.002715622917009483973382888422065661871,
     0.002650480573091764779219969838663928385,
     0.00253728956684473290830728053890652518 ,
     0.002379294169818396871562971028879474034,
     0.002180489418702247651077330559132860799,
     0.001945530582887909382822089199294168793,
     0.001679632628943958459061258636779712106,
     0.001388461720399218916541239643436256301,
     0.001078020892849170745547704441946734732,
     0.000754532105502861254187063622111963923,
     0.000424316890530646885753424113474352453,
     0.000093677801351504106416173689453330553,
    -0.000231217198569732467015175325641962445,
    -0.00054444536195551900600170247557230141 ,
    -0.000840432886721269550682478222114468736,
    -0.001114049999748976732191763083790192468,
    -0.001360695840163522393750916705812414875,
    -0.00157637180405365722769828185079177274 ,
    -0.001757742249866758648887965499341135001,
    -0.001902181716396698875001791684269392135,
    -0.002007808068506397852076572618784666702,
    -0.002073501254503357354302961468306421011,
    -0.002098907628427654215030884188308846205,
    -0.002084430055505362856110851410562645469,
    -0.002031204274920187305419894130409375066,
    -0.001941062236365235669707796084537676506,
    -0.001816483351385879191006167410193938849,
    -0.001660534803541688451261615355747380818,
    -0.001476802239588183860222181387200635072,
    -0.001269312314407734527260673829118786671,
    -0.001042448683058825936384450550065139396,
    -0.000800863122405055891800396139501572179,
    -0.000549383521279144383490933289948543461,
    -0.000292920501596294292814132154134654229,
    -0.000036374423434406564289034929915445105,
     0.000215455514377112114857149016700077482,
     0.000457958438819819628647078690875105167,
     0.000686793694093628163087339455472601912,
     0.000897966049038522958793129280508082957,
     0.001087892960823486554131078740681459749,
     0.00125346280662781955211881879108659632 ,
     0.001392083183363572061394530798850155406,
     0.001501718576877183151940808869539978332,
     0.001580916912564281654948739053168083046,
     0.001628824714876838351818033601148272282,
     0.001645190819717476556072188742518846993,
     0.001630358797178384656217930981370045629,
     0.001585248448595177536701861242818267783,
     0.001511326937751423290373642416284383216,
     0.001410570297851853087053863866628944379,
     0.001285416220468320195116640469734647922,
     0.001138709177313391301966660762445826549,
     0.000973639048091643724731902853619658345,
     0.00079367452595249191743542738208816445 ,
     0.0006024926448361722424937325648386377  ,
     0.000403905819380529602317247972464997474,
     0.00020178780766143828285900940766595113 ,
     0.000000000000000001249617663552301259512,
    -0.000197680595995238775255259389140860549,
    -0.000387630361979591456667720850148839418,
    -0.000566443836234581388211495323048438877,
    -0.000730993113893695241854719935048478874,
    -0.000878480874049930365518590313911317935,
    -0.001006486166233206249256970643557451695,
    -0.001113002240827411053192275147694090265,
    -0.001196465870598564231949700875645703491,
    -0.001255777780391829087994204350309246365,
    -0.001290313975913833432693222924569909082,
    -0.001299927937019290701339824245508225431,
    -0.001284943812787356278576345047781614994,
    -0.001246140921731073809494705351141874416,
    -0.001184730017726368924910196334110423777,
    -0.001102321927888254369382048380998639914,
    -0.001000889300142004164489994977316200675,
    -0.000882722313427126330578897928091919312,
    -0.000750379300469695151645788122607427795,
    -0.000606633310377126971392469645394385225,
    -0.00045441569485869478563222489952977412 ,
    -0.000296757836975038461965747949022897956,
    -0.000136732154707389292388336476946619769,
     0.000022606496538775509733219110097834914,
     0.000178277927566126135651425332895314568,
     0.000327431179480497348225492837414662972,
     0.000467395570600371700487746240426645272,
     0.000595727333696912547157664707953017569,
     0.000710251051457741781544608095089188282,
     0.000809095211481369652392614533198411664,
     0.000890721326174332144083589657412858287,
     0.000953946195098786956304004469586743653,
     0.000997957024955020959716689432639213919,
     0.001022319262776958661773085701440777484,
     0.001026977138363281217073308404508225067,
     0.001012247049803222716940487302395013103,
     0.000978804058624752840872540460281925334,
     0.000927661886178312569337101045618965145,
     0.000860146918144223519321622806188543109,
     0.00077786682751614219435282171488665881 ,
     0.000682674516327045764925440796133671029,
     0.00057662815129834953629950344833332565 ,
     0.000461948127367883007530352523772876339,
     0.000340971834878403090400567077011828587,
     0.000216107130610833613870019886959994437,
     0.000089785419692157554896229376684146928,
    -0.000035584755099834862847665850615896943,
    -0.000157662747445638161359823814500202843,
    -0.000274218639134083069872765969776651218,
    -0.000383173101553307483054661153332176582,
    -0.000482633590959779862263751004647360787,
    -0.000570926264942791259274224024977684167,
    -0.000646623101008341914439081499210715265,
    -0.000708563799763748444066058240764505172,
    -0.000755872162702514427921884898609050651,
    -0.00078796674590140625745599001206187495 ,
    -0.000804565703851261161509700325922267439,
    -0.000805685849963423748702762150486478276,
    -0.000791636069890460465289794278476165346,
    -0.000763005328631860741707415574097694844,
    -0.000720645610550986188795608011758986322,
    -0.000665650221161244101675258377781574382,
    -0.000599327959294446263767419669221681033,
    -0.000523173736710741714081573938699420978,
    -0.00043883627825748461066118766282784236 ,
    -0.000348083578503053357473123741172571499,
    -0.000252766819799911683554899388681747041,
    -0.00015478347168316585868302892592396347 ,
    -0.000056040292377582640135236929923578941,
     0.000041583059772099072572224681687558245,
     0.000136269123392875052399805801961463203,
     0.0002262957969369902772645980482124628  ,
     0.000310066974871946632492936135605532399,
     0.000386140125459062504009732919030284393,
     0.000453250348020013183771015352618860561,
     0.000510330524688378927428145104272516619,
     0.000556527264557906309501433828046401686,
     0.000591212425157407682994870068426962462,
     0.000613990085544666966584081979618758851,
     0.000624698935248740893667884765960707227,
     0.000623410132055227561749533027324332579,
     0.000610420767533728170564644166518064594,
     0.000586243160650398655205084441632834569,
     0.000551590275309068100648146604214616673,
     0.000507357625884148817109464690844333745,
     0.000454602094577485080564849262430016097,
     0.000394518134766574100121688806197539634,
     0.000328411874632657230753396415678935227,
     0.000257673664698080686318026888415033682,
     0.000183749631116565968541251563372895816,
     0.000108112803525203227095717595229729113
};