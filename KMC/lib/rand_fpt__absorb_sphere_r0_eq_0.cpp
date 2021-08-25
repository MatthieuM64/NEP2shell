double ran();
double prob_dens_fpt__absorb_unit_sphere_r0_eq_0(const double t);

double rand_fpt__absorb_sphere_r0_eq_0(const double D,const double R)
{
    static const int og=331;
    static const int og_p_eins=332;
    static const double Q=3.078216163313864596007094161158e-03;
                              
       
    static const double x[]={  0 ,  2.500000000000000000000000000000e-02 ,  3.112353741730354816788946219630e-02 ,  3.467458557293461848309385958720e-02 ,  3.726489077711632659706953488959e-02 ,  3.935364545551417655551973553324e-02 ,  4.113290298971221221340042663263e-02 ,  4.270113532655450859498650630061e-02 ,  4.411566509598236982875447400849e-02 ,  4.541288535082301789327517646633e-02 ,  4.661740495672996670237061405473e-02 ,  4.774668028035181165905615317343e-02 ,  4.881356809011669784875103518230e-02 ,  4.982782841798700576623750195029e-02 ,  5.079705716265897796947048062019e-02 ,  5.172729035470714142124714172354e-02 ,  5.262341004339339250109789964050e-02 ,  5.348942538160637592300917582066e-02 ,  5.432867244823875745886269493032e-02 ,  5.514395956555178601193781320257e-02 ,  5.593767510237559756556278255879e-02 ,  5.671186886495183499973846144669e-02 ,  5.746831451433694235607904805879e-02 ,  5.820855810766154302386463355904e-02 ,  5.893395632657011582648171386547e-02 ,  5.964570692904210736295720591340e-02 ,  6.034487325934815958831930628051e-02 ,  6.103240416322017888603912320773e-02 ,  6.170915031070033840577304017201e-02 ,  6.237587768196445207580805667115e-02 ,  6.303327879169883931421624880519e-02 ,  6.368198209528488848727078948449e-02 ,  6.432255992147594663207805800089e-02 ,  6.495553520203090728428776355061e-02 ,  6.558138721232063406934802855329e-02 ,  6.620055649358918206951458134582e-02 ,  6.681344909399377244829372176147e-02 ,  6.742044023934719673818769285142e-02 ,  6.802187752387334091050588335639e-02 ,  6.861808369495216708896215901866e-02 ,  6.920935909279861030672550604672e-02 ,  6.979598379555603376521074653287e-02 ,  7.037821951183213680282087575116e-02 ,  7.095631125583783773300653694685e-02 ,  7.153048883467997081240043156788e-02 ,  7.210096817275266152433022992611e-02 ,  7.266795249437184128519956557928e-02 ,  7.323163338264700519170922586909e-02 ,  7.379219172996120539792399585509e-02 ,  7.434979859323690564603835894716e-02 ,  7.490461596532386826645482437165e-02 ,  7.545679747229325784385905595072e-02 ,  7.600648900510927943472579790480e-02 ,  7.655382929303514298906593942679e-02 ,  7.709895042518077918597081516530e-02 ,  7.764197832578841316878457628629e-02 ,  7.818303318815658693240033836938e-02 ,  7.872222987150518511724926779663e-02 ,  7.925967826456831235967169958888e-02 ,  7.979548361925592057759723061863e-02 ,  8.032974685733842162715637131415e-02 ,  8.086256485277239609763816265575e-02 ,  8.139403069199258866226642855759e-02 ,  8.192423391423949695518240587600e-02 ,  8.245326073376781224729210046598e-02 ,  8.298119424558435543048015998630e-02 ,  8.350811461619123754295770965727e-02 ,  8.403409926065758432910887521534e-02 ,  8.455922300720859027752367504055e-02 ,  8.508355825040159285929519337962e-02 ,  8.560717509385329664018384756446e-02 ,  8.613014148338852331239658459026e-02 ,  8.665252333139744790536974069628e-02 ,  8.717438463311393489723743450089e-02 ,  8.769578757546121316606636991938e-02 ,  8.821679263905177420245822956016e-02 ,  8.873745869387521713965928286810e-02 ,  8.925784308916007737795765988503e-02 ,  8.977800173785283528449471514403e-02 ,  9.029798919611875920818572665562e-02 ,  9.081785873823451273471350771340e-02 ,  9.133756432042493390574290061584e-02 ,  9.185726990261535507677229351828e-02 ,  9.237697548480577624780168642072e-02 ,  9.289679910687849332194531775945e-02 ,  9.341670640060486518236747471274e-02 ,  9.393674518613584020622161019792e-02 ,  9.445696235938956958203800365900e-02 ,  9.497740394350683759630084878729e-02 ,  9.549811513767550107398413125636e-02 ,  9.601914036350427027292877449754e-02 ,  9.654052330911239349756836882294e-02 ,  9.706230697108925205341196795098e-02 ,  9.758453369446641194945637544491e-02 ,  9.810724521083420789352008196744e-02 ,  9.863048267472535889914538075653e-02 ,  9.915428669837934855089634253879e-02 ,  9.967869738499327085220262357086e-02 ,  1.002037543605574766628283314105e-01 ,  1.007294968043675950512860054956e-01 ,  1.012559634782982936641855570216e-01 ,  1.017831927549184331807918472714e-01 ,  1.023112226445220187130549244457e-01 ,  1.028400908211445156385110717569e-01 ,  1.033698346476296427294182634856e-01 ,  1.039004911998076489697115883733e-01 ,  1.044320972898422926582530536493e-01 ,  1.049646894888002456068983077612e-01 ,  1.054983041484934172895021392871e-01 ,  1.060329774226417117715081963003e-01 ,  1.065687452874009742640379455425e-01 ,  1.071056435612983361401537040751e-01 ,  1.076437079246148108064186721690e-01 ,  1.081829739382528130046769974094e-01 ,  1.087234770621242573304964386343e-01 ,  1.092652526730930256095154875911e-01 ,  1.098083360825038659797769902729e-01 ,  1.103527625533281887879787097743e-01 ,  1.108985673169557463212664276240e-01 ,  1.114457855896598163815940179792e-01 ,  1.119944525887622459272442728824e-01 ,  1.125446035485235432920410624466e-01 ,  1.130962737357821292988550290371e-01 ,  1.136494984653658629233944500527e-01 ,  1.142043131152980405627962849867e-01 ,  1.147607531418192244156679810832e-01 ,  1.153188540942454804094620667291e-01 ,  1.158786516296828953340986297393e-01 ,  1.164401815276175925352108393356e-01 ,  1.170034797043998721956511001675e-01 ,  1.175685822276405627047385323608e-01 ,  1.181355253305371809775329904285e-01 ,  1.187043454261470591976700473893e-01 ,  1.192750791216242009141526191712e-01 ,  1.198477632324362785452870059041e-01 ,  1.204224347965778751593232968531e-01 ,  1.209991310887958041320267507053e-01 ,  1.215778896348421093272994029165e-01 ,  1.221587482257701543776832812512e-01 ,  1.227417449322890511849913861114e-01 ,  1.233269181191915537943145375277e-01 ,  1.239143064598704533348353002236e-01 ,  1.245039489509384519191743740815e-01 ,  1.250958849269664675271413571923e-01 ,  1.256901540753553273685764057857e-01 ,  1.262867964513558435383387614956e-01 ,  1.268858524932523315710622964273e-01 ,  1.274873630377247295087763469505e-01 ,  1.280913693354046021506144366750e-01 ,  1.286979130666404722028594703190e-01 ,  1.293070363574881071323400604817e-01 ,  1.299187817959416077887075205716e-01 ,  1.305331924484213925416620417745e-01 ,  1.311503118765354491158927057200e-01 ,  1.317701841541305359354149651803e-01 ,  1.323928538846503561446808589224e-01 ,  1.330183662188181011903593424060e-01 ,  1.336467668726611676600981642038e-01 ,  1.342781021458962918209194621804e-01 ,  1.349124189406938219236261122680e-01 ,  1.355497647808403598925226208035e-01 ,  1.361901878313195526654991333762e-01 ,  1.368337369183314004674577688781e-01 ,  1.374804615497710760897837125973e-01 ,  1.381304119361889173349678616274e-01 ,  1.387836390122539658243677027477e-01 ,  1.394401944587441811513830998287e-01 ,  1.401001307250872618289762919529e-01 ,  1.407635010524768557180095288513e-01 ,  1.414303594975898448796954412726e-01 ,  1.421007609569313454888473450444e-01 ,  1.427747611918350751706490261117e-01 ,  1.434524168541478106679304774108e-01 ,  1.441337855126277910952444600640e-01 ,  1.448189256800881193911061103422e-01 ,  1.455078968413174803689964923122e-01 ,  1.462007594818118316622030412027e-01 ,  1.468975751173521377872044219532e-01 ,  1.475984063244647117214823520597e-01 ,  1.483033167718023073062421326123e-01 ,  1.490123712524857742605912502651e-01 ,  1.497256357174478507878527024127e-01 ,  1.504431773098225321862803026185e-01 ,  1.511650644004254234540191152489e-01 ,  1.518913666243725659278795185953e-01 ,  1.526221549188874292921112527418e-01 ,  1.533575015623480880937596772835e-01 ,  1.540974802146290639808141122349e-01 ,  1.548421659587949195717863902426e-01 ,  1.555916353442054461052229682553e-01 ,  1.563459664310952043873315220294e-01 ,  1.571052388366932673362429241914e-01 ,  1.578695337829522836469366160231e-01 ,  1.586389341459594476197347475357e-01 ,  1.594135245071056327347895660883e-01 ,  1.601933912060928397926961253705e-01 ,  1.609786223958642390826884016689e-01 ,  1.617693080995454659027670269621e-01 ,  1.625655402694904768633694624201e-01 ,  1.633674128485302090863245256066e-01 ,  1.641750218335275254081649873743e-01 ,  1.649884653413474972919829732838e-01 ,  1.658078436773579962934394307553e-01 ,  1.666332594065818593749428466572e-01 ,  1.674648174276285898480883355702e-01 ,  1.683026250495406831219965946246e-01 ,  1.691467920716972559509459270482e-01 ,  1.699974308669257432566632892006e-01 ,  1.708546564679810443669675988065e-01 ,  1.717185866575606902029297952337e-01 ,  1.725893420620344073994510858977e-01 ,  1.734670462490769210001852635275e-01 ,  1.743518258294040146064905902490e-01 ,  1.752438105628238103693837633399e-01 ,  1.761431334688280003975806197142e-01 ,  1.770499309419614205851686695306e-01 ,  1.779643428722229777761393227957e-01 ,  1.788865127707665980331143985513e-01 ,  1.798165879011876408436146985713e-01 ,  1.807547194166982121607281479400e-01 ,  1.817010625035141072692116525361e-01 ,  1.826557765307968307095434172787e-01 ,  1.836190252075163930055463701775e-01 ,  1.845909767466245018856446542714e-01 ,  1.855718040369534904026249476347e-01 ,  1.865616848232840106347620187124e-01 ,  1.875608018950543391602217186201e-01 ,  1.885693432842162753663768320100e-01 ,  1.895875024727772702503777237702e-01 ,  1.906154786106058262693424884825e-01 ,  1.916534767441176050291052926285e-01 ,  1.927017080565033411093259457305e-01 ,  1.937603901202068867820427608260e-01 ,  1.948297471624128343237997509223e-01 ,  1.959100103443585449732971020356e-01 ,  1.970014180553454596391732626943e-01 ,  1.981042162223897223570094895795e-01 ,  1.992186586365229072796863180230e-01 ,  2.003450072968305513344627065878e-01 ,  2.014835327733998653614169222741e-01 ,  2.026345145904391017528762568139e-01 ,  2.037982416309303472731543337314e-01 ,  2.049750125642858219689139545786e-01 ,  2.061651362985960309306899910389e-01 ,  2.073689324591873753555742678802e-01 ,  2.085867318953482452457879054960e-01 ,  2.098188772172374886024369593877e-01 ,  2.110657233651589379231010124567e-01 ,  2.123276382135720082253870221542e-01 ,  2.136050032124130969919722856843e-01 ,  2.148982140685276795079936202057e-01 ,  2.162076814702609277928224726336e-01 ,  2.175338318585280097155766700856e-01 ,  2.188771082479869084956679890246e-01 ,  2.202379711022699917407621030195e-01 ,  2.216168992675994489072733313473e-01 ,  2.230143909695204133044687770655e-01 ,  2.244309648779389842476681853368e-01 ,  2.258671612461560389454578592133e-01 ,  2.273235431301480264579413911045e-01 ,  2.288006976949701262590403962249e-01 ,  2.302992376158535381769505480359e-01 ,  2.318198025823467720396457768550e-01 ,  2.333630609147215629437590274991e-01 ,  2.349297113028400406221285514200e-01 ,  2.365204846787755458627074518750e-01 ,  2.381361462357117879248873669975e-01 ,  2.397774976070332986559892710945e-01 ,  2.414453792210869028336485226452e-01 ,  2.431406728488654072561953382330e-01 ,  2.448643043638714759237756956294e-01 ,  2.466172467356974184924088871879e-01 ,  2.484005232814472081184042748733e-01 ,  2.502152112020795908805243683170e-01 ,  2.520624454341234966618329475627e-01 ,  2.539434228510774019688017942898e-01 ,  2.558594068532336783503817103199e-01 ,  2.578117323897632795194881420395e-01 ,  2.598018114627696904578279083975e-01 ,  2.618311391698104353310696043882e-01 ,  2.639013003492532570613589087450e-01 ,  2.660139769019790891592984006783e-01 ,  2.681709558736025131061756322838e-01 ,  2.703741383938399405913098161218e-01 ,  2.726255495842655613379553160323e-01 ,  2.749273495628812680476871055449e-01 ,  2.772818456942112435153979849800e-01 ,  2.796915062576566425639851630802e-01 ,  2.821589757354038783928078883430e-01 ,  2.846870919552555746826006466453e-01 ,  2.872789053645733411202703384400e-01 ,  2.899377007606237067126244712649e-01 ,  2.926670218619393377479515496133e-01 ,  2.954706991772993832021956025250e-01 ,  2.983528817167185337974031334696e-01 ,  3.013180731964152655607777927278e-01 ,  3.043711735222638488026762908342e-01 ,  3.075175265004154771320404820652e-01 ,  3.107629749283474155157120624879e-01 ,  3.141139244760773293511497886736e-01 ,  3.175774180909325824296068178595e-01 ,  3.211612230705109208751269663473e-01 ,  3.248739334748529273210851720553e-01 ,  3.287250912278621067857669189769e-01 ,  3.327253301411950714033934585222e-01 ,  3.368865482527874906240930065025e-01 ,  3.412221154074166169131168837022e-01 ,  3.457471250611042164727329166443e-01 ,  3.504787020703797457680305884281e-01 ,  3.554363820315150910955780861822e-01 ,  3.606425830081361803246697987334e-01 ,  3.661231978966301665997629756458e-01 ,  3.719083462508588838093192841581e-01 ,  3.780333397171663110302390335383e-01 ,  3.845399378593037292256781415590e-01 ,  3.914780052203301137172557159399e-01 ,  3.989077328867391664761613663011e-01 ,  4.069026704529378442412886325898e-01 ,  4.155539481319452109498701181791e-01 ,  4.249762922998356816662347401638e-01 ,  4.353168243125940571112550548373e-01 ,  4.467683280534247221107535862329e-01 ,  4.595899826684058575130939498113e-01 ,  4.741411653622333244836550289777e-01 ,  4.909394649829133775237808501594e-01 ,  5.107667524844764754714635583068e-01 ,  5.348792878117268935687995671343e-01 ,  5.654698467368470221697730556238e-01 ,  6.068405427345578720646330628409e-01 ,  6.690693034924892273744852992429e-01 ,  7.840562991811630965907352451184e-01 ,  1.141474674129796534934374583897e+00  };
    
    static const double y[]={  1.231286465325545838402837664463e-01 ,  5.026859400933215853766986861621e-01 ,  8.668472035313255440886946043055e-01 ,  1.188360413415565166953970272041e+00 ,  1.473708806088691670059787357618e+00 ,  1.730056556821780307608965647907e+00 ,  1.962857218919478435586282948130e+00 ,  2.176140954996598761683074852953e+00 ,  2.372932546980617404968190763869e+00 ,  2.555555051340245296892638641832e+00 ,  2.725833194903541668013847657763e+00 ,  2.885229482556579115151419192944e+00 ,  3.034936967097338634709228709004e+00 ,  3.175943945364169416024143837556e+00 ,  3.309080120583880299977776468570e+00 ,  3.435050252970848298742243862767e+00 ,  3.554459173512725612012690813430e+00 ,  3.667830708858738124070252808126e+00 ,  3.775622229207857129232554878265e+00 ,  3.878235993252535977929309832752e+00 ,  3.976028110935267855014548509769e+00 ,  4.069315708030123366566407380469e+00 ,  4.158382714923478965977212949021e+00 ,  4.243484589671751729484727878302e+00 ,  4.324852206127914111981823844625e+00 ,  4.402695081106680249953715166998e+00 ,  4.477204073268625489387032819957e+00 ,  4.548553656013402108149345483068e+00 ,  4.616903844036841225706554351644e+00 ,  4.682401836159921115119630212266e+00 ,  4.745183424066755174731488097355e+00 ,  4.805374206624128002496278185055e+00 ,  4.863090641730970349611693131187e+00 ,  4.918440961608257052160966229456e+00 ,  4.971525972682697154458926833953e+00 ,  5.022439757441734150727760178492e+00 ,  5.071270292619432683779398769262e+00 ,  5.118099995644776338735991775012e+00 ,  5.163006209318293934902111214967e+00 ,  5.206061633082340199970425660936e+00 ,  5.247334707939745424647550694682e+00 ,  5.286889960996721503538614535790e+00 ,  5.324788314713431281197277147201e+00 ,  5.361087365203793423379417764365e+00 ,  5.395841633306686080577356820938e+00 ,  5.429102791631294558760446863024e+00 ,  5.460919870341987808086842987525e+00 ,  5.491339444078396018037283381371e+00 ,  5.520405802092660661312875592830e+00 ,  5.548161103418697509639435009736e+00 ,  5.574645518660056920658310159541e+00 ,  5.599897359787284195935196741415e+00 ,  5.623953199167397114298948045886e+00 ,  5.646847978902933324294034088949e+00 ,  5.668615111432435458305422413998e+00 ,  5.689286572235291264083694167212e+00 ,  5.708892985389071586339261698229e+00 ,  5.727463702644852091658507919631e+00 ,  5.745026876613735560851532314848e+00 ,  5.761609528594452464925363212173e+00 ,  5.777237611516275764488452441047e+00 ,  5.791936068422496180301419814338e+00 ,  5.805728886876477690313707415464e+00 ,  5.818639149634091715087990780712e+00 ,  5.830689081892464244230855713883e+00 ,  5.841900095394907441576103407357e+00 ,  5.852292829645168582690712850179e+00 ,  5.861887190460303208468787190290e+00 ,  5.870702386070210959829245055286e+00 ,  5.878756960952854317979216510668e+00 ,  5.886068827577145813490992454861e+00 ,  5.892655296210206457934398670184e+00 ,  5.898533102931965358848013897407e+00 ,  5.903718435987711549782186523464e+00 ,  5.908226960598069963320051439775e+00 ,  5.912073842335819239570725353018e+00 ,  5.915273769169881238504899801084e+00 ,  5.917840972268586550230914274791e+00 ,  5.919789245646865221854690529450e+00 ,  5.921131964735246386203214890204e+00 ,  5.923000000000000000000000000000e+00 ,  5.923000000000000000000000000000e+00 ,  5.923000000000000000000000000000e+00 ,  5.921655024140590456975531250194e+00 ,  5.920702018337013895172302855000e+00 ,  5.919204968858071992592171934213e+00 ,  5.917175213691962111448400838523e+00 ,  5.914623768073591159489817932968e+00 ,  5.911561337236779477282954542474e+00 ,  5.907998328521421499145467380362e+00 ,  5.903944862875287583296394043490e+00 ,  5.899410785787281858706529471919e+00 ,  5.894405677686339240375006907303e+00 ,  5.888938863837728738787621125335e+00 ,  5.883019423766309944830118646870e+00 ,  5.876656200234247254255564331974e+00 ,  5.869857807798805957784409746076e+00 ,  5.862632640974121321606204064901e+00 ,  5.854988882019233205541432940393e+00 ,  5.846934508373202873849591252093e+00 ,  5.838477299756764845545366171960e+00 ,  5.829624844958705322585697907546e+00 ,  5.820384548323991250520891508663e+00 ,  5.810763635959592547180948104389e+00 ,  5.800769161672937351630461939071e+00 ,  5.790408012657009825242219833925e+00 ,  5.779686914935236196604015348565e+00 ,  5.768612438578502030372899049471e+00 ,  5.757191002705897243801438163520e+00 ,  5.745428880280090751604366856803e+00 ,  5.733332202707589737750035623617e+00 ,  5.720906964253535731304369412814e+00 ,  5.708159026280127520723749906536e+00 ,  5.695094121317236383438125088777e+00 ,  5.681717856973289302992583471844e+00 ,  5.668035719694038199337760802980e+00 ,  5.654053078376405329296863305364e+00 ,  5.639775187844194739697271076968e+00 ,  5.625207192192084969058229370472e+00 ,  5.610354128003967251069561333075e+00 ,  5.595220927451364578067601669240e+00 ,  5.579812421277358573697968742422e+00 ,  5.564133341671161762280417206050e+00 ,  5.548188325038201181699806397278e+00 ,  5.531981914670324143257574129128e+00 ,  5.515518563320497166091893968871e+00 ,  5.498802635686143661792125585264e+00 ,  5.481838410805053851795547930395e+00 ,  5.464630084367600773442542668180e+00 ,  5.447181770948808243890365788828e+00 ,  5.429497506163639539067598058613e+00 ,  5.411581248748708598090508133778e+00 ,  5.393436882573458124135431339092e+00 ,  5.375068218583700410115996932204e+00 ,  5.356478996680276504721326460934e+00 ,  5.337672887535456924698613920639e+00 ,  5.318653494349582023042235529276e+00 ,  5.299424354550321884510460221073e+00 ,  5.279988941436823815730831996222e+00 ,  5.260350665770909732343872918243e+00 ,  5.240512877317385652400217876673e+00 ,  5.220478866335430740733763863805e+00 ,  5.200251865022943593526470507688e+00 ,  5.179835048915638407373710464909e+00 ,  5.159231538242603064268538299940e+00 ,  5.138444399239954722822335812504e+00 ,  5.117476645424155993529691981268e+00 ,  5.096331238826485964572893457043e+00 ,  5.075011091190095021827801639187e+00 ,  5.053519065131010373295613533125e+00 ,  5.031857975264400257737352979004e+00 ,  5.010030589297348815213039927435e+00 ,  4.988039629089340359879858390452e+00 ,  4.965887771681601169352843913380e+00 ,  4.943577650296398746262846103244e+00 ,  4.921111855307352681313612086364e+00 ,  4.898492935181767626366298664584e+00 ,  4.875723397395957351804105107570e+00 ,  4.852805709324489302791684051121e+00 ,  4.829742299104241378907886515687e+00 ,  4.806535556474126742143419758200e+00 ,  4.783187833591308216437186176105e+00 ,  4.759701445824691190288728879162e+00 ,  4.736078672526452790180433153739e+00 ,  4.712321757782335379033414779590e+00 ,  4.688432911141404077672003099258e+00 ,  4.664414308325940939471342487663e+00 ,  4.640268091922122564156109483828e+00 ,  4.615996372052103254962473959357e+00 ,  4.591601227028102246409891000809e+00 ,  4.567084703989071003363666867210e+00 ,  4.542448819520495064584601249033e+00 ,  4.517695560257864327126185737886e+00 ,  4.492826883474325996035127312614e+00 ,  4.467844717653015613673590282210e+00 ,  4.442750963044543593851998625391e+00 ,  4.417547492210097479344718169741e+00 ,  4.392236150550603680897248882680e+00 ,  4.366818756822376707175778236548e+00 ,  4.341297103639668825811302878153e+00 ,  4.315672957964518675098933684628e+00 ,  4.289948061584283545072774030401e+00 ,  4.264124131577226838237038424761e+00 ,  4.238202860766519578363529541069e+00 ,  4.212185918163002736073047392866e+00 ,  4.186074949397045559378941436208e+00 ,  4.159871577139824014257779937567e+00 ,  4.133577401514332834132086184983e+00 ,  4.107194000496434528585556594174e+00 ,  4.080722930306238992485100032664e+00 ,  4.054165725790098069829803800748e+00 ,  4.027523900793490545982097513643e+00 ,  4.000798948525064552340310555610e+00 ,  3.973992341912096254807005715023e+00 ,  3.947105533947615948324503874381e+00 ,  3.920139958029445281894971014476e+00 ,  3.893097028291382280332707472217e+00 ,  3.865978139926764099789701134388e+00 ,  3.838784669504631043932801213349e+00 ,  3.811517975278709267396321770175e+00 ,  3.784179397489423794420281030757e+00 ,  3.756770258659147975801322204795e+00 ,  3.729291863880890289568374116607e+00 ,  3.701745501100614454029152462086e+00 ,  3.674132441393384160639018184175e+00 ,  3.646453939233519343886268195693e+00 ,  3.618711232758946782182498762468e+00 ,  3.590905544029923964466780363732e+00 ,  3.563038079282311559523891075028e+00 ,  3.535110029175566487316048582267e+00 ,  3.507122569035624513183836845178e+00 ,  3.479076859092838466675517767860e+00 ,  3.450974044715135627978696102939e+00 ,  3.422815256636555528331174082758e+00 ,  3.394601611181327379213578065410e+00 ,  3.366334210483644582419851248502e+00 ,  3.338014142703292284177652928728e+00 ,  3.309642482237282727401515783709e+00 ,  3.281220289927652234174606696731e+00 ,  3.252748613265573024239551871454e+00 ,  3.224228486591932754605001443803e+00 ,  3.195660931294534661823780263436e+00 ,  3.167046956002071515187991889711e+00 ,  3.138387556775027260909789432372e+00 ,  3.109683717293661271140505930950e+00 ,  3.080936409043231526362058100827e+00 ,  3.052146591496614876507434720675e+00 ,  3.023315212294484768906115526158e+00 ,  2.994443207423209526359305455057e+00 ,  2.965531501390637435942158130427e+00 ,  2.936581007399938601492783058950e+00 ,  2.907592627521677756895087209948e+00 ,  2.878567252864297074033314375653e+00 ,  2.849505763743193474101264520823e+00 ,  2.820409029848581114274861863196e+00 ,  2.791277910412336629732555512082e+00 ,  2.762113254374032426047493988124e+00 ,  2.732915900546371908499578486262e+00 ,  2.703686677780250080111123491543e+00 ,  2.674426405129673525195442303723e+00 ,  2.645135892016785515722908076983e+00 ,  2.615815938397254940645413488544e+00 ,  2.586467334926302082613515902867e+00 ,  2.557090863125650085289537341927e+00 ,  2.527687295551708416358048183231e+00 ,  2.498257395965313902649291383057e+00 ,  2.468801919503376180723440893128e+00 ,  2.439321612852797877542044916109e+00 ,  2.409817214427065745720940684701e+00 ,  2.380289454545937589504870857788e+00 ,  2.350739055618681427102208306709e+00 ,  2.321166732331358275863172628956e+00 ,  2.291573191838678595118487238280e+00 ,  2.261959133961005202141509180146e+00 ,  2.232325251387122870141409567870e+00 ,  2.202672229883447367673016914779e+00 ,  2.173000748510405023731436512036e+00 ,  2.143311479846778703509305155331e+00 ,  2.113605090222888154524207541806e+00 ,  2.083882239963552941382854522184e+00 ,  2.054143583641875668630297438165e+00 ,  2.024389770344983083070145503569e+00 ,  1.994621443952974311020458124129e+00 ,  1.964839243432450484974370412423e+00 ,  1.935043803146140145458591064924e+00 ,  1.905235753180292138801545926926e+00 ,  1.875415719691684661741460223591e+00 ,  1.845584325276298396769696365058e+00 ,  1.815742189361926546889565375172e+00 ,  1.785889928627248744459831481004e+00 ,  1.756028157450183619898636681551e+00 ,  1.726157488388661343818113197277e+00 ,  1.696278532697328636085778450468e+00 ,  1.666391900884121531173794455196e+00 ,  1.636498203311123792367547744460e+00 ,  1.606598050844680939025784969640e+00 ,  1.576692055560372816873045152100e+00 ,  1.546780831509175052498608081006e+00 ,  1.516864995551977709255493389236e+00 ,  1.486945168270597235341252368090e+00 ,  1.457021974964538385795764429888e+00 ,  1.427096046744063851132007937728e+00 ,  1.397168021731644142809124674740e+00 ,  1.367238546385629141805915392458e+00 ,  1.337308276962054483476799696614e+00 ,  1.307377881132930164158930610473e+00 ,  1.277448039782228221854554238640e+00 ,  1.247519449004180474633683106839e+00 ,  1.217592822332526361893566221350e+00 ,  1.187668893234151518610718135123e+00 ,  1.157748417906299816363223179236e+00 ,  1.127832178423437821014417287243e+00 ,  1.097920986288168164521776310749e+00 ,  1.068015686450664874193215781164e+00 ,  1.038117161873368311816049727959e+00 ,  1.008226338732678435949485087814e+00 ,  9.783441923678278097427126948583e-01 ,  9.484717541099128248522167433872e-01 ,  9.186101191524022550926988272431e-01 ,  8.887604556598872020594127311411e-01 ,  8.589240153564493990692458009677e-01 ,  8.291021458915561348895342722241e-01 ,  7.992963053535364963279525698648e-01 ,  7.695080793934683752203465276059e-01 ,  7.397392015425717911156947570865e-01 ,  7.099915774634522544035547420650e-01 ,  6.802673140830343087054665795223e-01 ,  6.505687548315276390856432841420e-01 ,  6.208985225841262975575498540707e-01 ,  5.912595724092998679477613985059e-01 ,  5.616552569267871185170800386487e-01 ,  5.320894080553368971326140552506e-01 ,  5.025664403148543688476756631160e-01 ,  4.730914828409351022984202491516e-01 ,  4.436705501888479825776108820207e-01 ,  4.143107663597086727974479991207e-01 ,  3.850206631166292151044002516089e-01 ,  3.558105840000102767623299964527e-01 ,  3.266932419857715255525269108660e-01 ,  2.976845059341138255879187045120e-01 ,  2.688045372013805127786218977074e-01 ,  2.400794792676135114243063482962e-01 ,  2.115440530218638001477314155915e-01 ,  1.832456994352174676246304534475e-01 ,  1.552515019046952989411792654182e-01 ,  1.276604107173692776089433706892e-01 ,  1.006263458882445539969637869885e-01 ,  7.440571373235273690876570299128e-02 ,  4.946613311629431923818787695451e-02 ,  2.677012426386113959943059953285e-02 ,  8.612361252429318949499606161783e-03   };

   

    if (D==0.0) return 1e200;


    double zu;
    double zu_reject;
    int index;
    double t_candidat;
    double abso_d_y_index;
    do
    {
      zu=ran();
      index= (int) (og_p_eins*zu);
          
      zu_reject=ran();

      if(index<og)
      {
       t_candidat=Q*(og_p_eins*zu-index)/y[index]+x[index]; 
       if  (((t_candidat<0.354) && (t_candidat>0.05)) && (zu_reject<0.952)) {return (t_candidat*R*R/D);};  
       abso_d_y_index=prob_dens_fpt__absorb_unit_sphere_r0_eq_0(t_candidat)/y[index];
      }
      else
      {
        if (index==og_p_eins)
        {
           t_candidat=5.0;
           abso_d_y_index=0.0;
        }
        else // also index==og
        {
            t_candidat=(og_p_eins*zu*(1.0-x[og])-og+og*x[og]+x[og])/(og_p_eins*(1.0-zu));
            const double save_computation_time=t_candidat+1.0-x[og];
            //y[og]=Q/(save_computation_time*save_computation_time); //wichtig!!!
            //abso_d_y_index=prob_dens_fpt__absorb_unit_sphere_r0_eq_0(t_candidat)/y[index];
            abso_d_y_index=prob_dens_fpt__absorb_unit_sphere_r0_eq_0(t_candidat)/Q*(save_computation_time*save_computation_time);
            
        }

      }

      if (abso_d_y_index>1.0)
      {
        std::cout<<"FEHLER in \"rand_fpt__absorb_sphere_r0_eq_0\"  zu="<<zu<<"  => abso_d_y_index="<<abso_d_y_index<<std::endl;
        abort();
      }

      if (abso_d_y_index>=zu_reject) return (t_candidat*R*R/D);

    }while(true);
}
