#include <dlib/math.h>
#include "tester.h"

namespace
{
    using namespace test;
    using namespace dlib;
    using namespace std;

    logger dlog("test.math");

    template<typename R>
    void test_cyl_bessel_i()
    {
        constexpr R tol = std::is_same<R,float>::value ? 1e-3 : 1e-9;

        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,0.0) - 1.0) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,9.5367431640625e-7) - 1.00000000000022737367544324498417583090700894607432256476338) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,0.0009765625) - 1.00000023841859331241759166109699567801556273303717896447683) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,0.1) - 1.00250156293410) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,0.2) - 1.01002502779515) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,0.5) - 1.06348337074132) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,1.0) - 1.26606587775200833559824462521471753760767031135496220680814) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,2.0) - 2.27958530233606726743720444081153335328584110278545905407084) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,3.0) - 4.88079258586503) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,4.0) - 11.3019219521363304963562701832171024974126165944353377060065) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0,7.0) - 168.593908510289698857326627187500840376522679234531714193194) < tol);

        // check case when nu=0.5
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,0.0) - 0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,0.1) - 0.252733984600132) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,0.2) - 0.359208417583362) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,0.5) - 0.587993086790417) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,1.0) - 0.937674888245489) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,2.0) - 2.046236863089057) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(0.5,3.0) - 4.614822903407577) < tol);

        // check case when nu=1
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,0.0) - 0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,9.5367431640625e-7) - 4.76837158203179210108624277276025646653133998635956784292029E-7) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,0.0009765625) - 0.000488281308207663226432087816784315537514225208473395063575150) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,1.0) - 0.565159103992485027207696027609863307328899621621092009480294) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,2.0) - 1.59063685463732906338225442499966624795447815949553664713229) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1,4.0) - 9.75946515370444990947519256731268090005597033325296730692753) < tol);

        // check case when nu=1.3
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,0.0) - 0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,0.1) - 0.017465030873157) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,0.2) - 0.043144293848607) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,0.5) - 0.145248507279042) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,1.0) - 0.387392350983796) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,2.0) - 1.290819215135879) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(1.3,3.0) - 3.450680420553085) < tol);

        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(2.0,0.0) - 0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(2.0,9.5367431640625e-7) - 1.13686837721624646204093977095674566928522671779753217215467e-13) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(5.0,1.0) - 0.000271463155956971875181073905153777342383564426758143634974124) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_i<R,R>(5.0,10.0) - 777.188286403259959907293484802339632852674154572666041953297) < tol);
    }

    template<typename R>
    void test_cyl_bessel_j()
    {
        constexpr R tol = std::is_same<R,float>::value ? 1e-3 : 1e-7;
        
        // check case when nu=0
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,0.0f) -  1.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,1e-5) -  0.999999999975000000000156249999999565972) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,0.1f) -  0.99750156206604012610) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,0.2f) -  0.990024972239576) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,0.5f) -  0.938469807240813) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,1.0f) -  0.7651976865579665514497175261026632209093) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,2.0f) -  0.2238907791412356680518274546499486258252) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,3.0f) - -0.260051954901934) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,4.0f) - -0.3971498098638473722865907684516980419756) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,6.0f) -  0.150645257250997) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.0f,8.0f) -  0.1716508071375539060908694078519720010684) < tol);

        // check case when nu=0.5
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,0.0f) -  0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,0.1f) -  0.251892940326001) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,0.2f) -  0.354450744211402) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,0.5f) -  0.540973789934529) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,1.0f) -  0.671396707141804) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,2.0f) -  0.513016136561828) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,3.0f) -  0.065008182877376) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,4.0f) - -0.301920513291637) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,6.0f) - -0.091015409523068) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (0.5f,8.0f) -  0.279092808570990) < tol);

        // check case when nu=1.7
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,0.0f) -  0.000000000000000) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,0.1f) -  0.003971976455203) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,0.2f) -  0.012869169735073) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,0.5f) -  0.059920175825578) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,1.0f) -  0.181417665056645) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,2.0f) -  0.437811462130677) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,3.0f) -  0.494432522734784) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,4.0f) -  0.268439400467270) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,6.0f) - -0.308175744215833) < tol);
        DLIB_TEST(std::abs(dlib::cyl_bessel_j<R,R> (1.7f,8.0f) - -0.001102600927987) < tol);
    }

    /*! Data generated using numpy.kaiser(100,10) !*/
    const static double KAISER_DATA_N_100_BETA_10[100] = {
        3.5514937472408539e-04, 8.0953565765640146e-04, 1.4927602635138389e-03, 2.4675442297088144e-03, 3.8052336130274676e-03, 5.5857303505092420e-03, 7.8972094710190420e-03, 1.0835605546804159e-02,
        1.4503855741398187e-02, 1.9010891977707660e-02, 2.4470380519411181e-02, 3.0999213508098533e-02, 3.8715763585297013e-02, 4.7737919492495319e-02, 5.8180927309611913e-02, 7.0155068579895508e-02,
        8.3763212789479791e-02, 9.9098287336055232e-02, 1.1624071305299229e-01, 1.3525585738402518e-01, 1.5619156027758538e-01, 1.7907578965928345e-01, 2.0391448384261476e-01, 2.3068963737878825e-01,
        2.5935768458725916e-01, 2.8984823134551607e-01, 3.2206318068343603e-01, 3.5587629139505955e-01, 3.9113320135654944e-01, 4.2765193866585327e-01, 4.6522393427160497e-01, 5.0361553963868211e-01,
        5.4257004243155915e-01, 5.8181016242808159e-01, 6.2104099916131583e-01, 6.5995339238661255e-01, 6.9822764664426740e-01, 7.3553756218605137e-01, 7.7155470659146597e-01, 8.0595285473054035e-01,
        8.3841251951929541e-01, 8.6862549231402408e-01, 8.9629930991503848e-01, 9.2116156507244351e-01, 9.4296397913446550e-01, 9.6148615903666468e-01, 9.7653896613624525e-01, 9.8796743134426157e-01,
        9.9565315945225696e-01, 9.9951617530351955e-01, 9.9951617530351955e-01, 9.9565315945225696e-01, 9.8796743134426157e-01, 9.7653896613624525e-01, 9.6148615903666468e-01, 9.4296397913446550e-01,
        9.2116156507244351e-01, 8.9629930991503848e-01, 8.6862549231402408e-01, 8.3841251951929541e-01, 8.0595285473054035e-01, 7.7155470659146597e-01, 7.3553756218605137e-01, 6.9822764664426740e-01,
        6.5995339238661255e-01, 6.2104099916131583e-01, 5.8181016242808159e-01, 5.4257004243155915e-01, 5.0361553963868211e-01, 4.6522393427160497e-01, 4.2765193866585327e-01, 3.9113320135654944e-01,
        3.5587629139505955e-01, 3.2206318068343603e-01, 2.8984823134551607e-01, 2.5935768458725916e-01, 2.3068963737878825e-01, 2.0391448384261476e-01, 1.7907578965928345e-01, 1.5619156027758538e-01,
        1.3525585738402518e-01, 1.1624071305299229e-01, 9.9098287336055232e-02, 8.3763212789479791e-02, 7.0155068579895508e-02, 5.8180927309611913e-02, 4.7737919492495319e-02, 3.8715763585297013e-02,
        3.0999213508098533e-02, 2.4470380519411181e-02, 1.9010891977707660e-02, 1.4503855741398187e-02, 1.0835605546804159e-02, 7.8972094710190420e-03, 5.5857303505092420e-03, 3.8052336130274676e-03,
        2.4675442297088144e-03, 1.4927602635138389e-03, 8.0953565765640146e-04, 3.5514937472408539e-04
    };

    /*! Data generated using scipy.signal.windows.kaiser(100, beta=(0.1102*(60.0 - 8.7)), sym=True) !*/
    const static double KAISER_DATA_N_100_ATT_60_SYMMETRIC[100] = {
            0.020388000239333876, 0.02744256403271499 , 0.03547436861206109 , 0.04452764776459671 , 0.05464219260368143 , 0.06585281850222179 , 0.07818885517960072 , 0.0916736652592095  ,
            0.10632419646629884 , 0.1221505724346981  , 0.13915572683718952 , 0.15733508524972548 , 0.17667629880657815 , 0.1971590333047311  , 0.2187548169747535  , 0.24142694965583922 ,
            0.26513047559895897 , 0.28981222157879266 , 0.31541090142737277 , 0.3418572875154526  , 0.3690744491071638  , 0.39697805690529064 , 0.42547675249440225 , 0.45447258078317027 ,
            0.48386148295142284 , 0.5135338468278656  , 0.5433751110667576  , 0.573266418961861   , 0.6030853172391263  , 0.6327064947110146  , 0.6620025552598495  , 0.6908448192496417  ,
            0.7191041471492626  , 0.7466517788883148  , 0.7733601822633054  , 0.7991039035683458  , 0.8237604135431857  , 0.8472109417133009  , 0.8693412922423999  , 0.8900426345270976  ,
            0.9092122619358844  , 0.9267543123285326  , 0.9425804442857991  , 0.9566104633300757  , 0.968772892822425   , 0.979005484676454   , 0.9872556655305768  , 0.9934809145627064  ,
            0.997649069710165   , 0.9997385596672104  , 0.9997385596672104  , 0.997649069710165   , 0.9934809145627064  , 0.9872556655305768  , 0.979005484676454   , 0.968772892822425   ,
            0.9566104633300757  , 0.9425804442857991  , 0.9267543123285326  , 0.9092122619358844  , 0.8900426345270976  , 0.8693412922423999  , 0.8472109417133009  , 0.8237604135431857  ,
            0.7991039035683458  , 0.7733601822633054  , 0.7466517788883148  , 0.7191041471492626  , 0.6908448192496417  , 0.6620025552598495  , 0.6327064947110146  , 0.6030853172391263  ,
            0.573266418961861   , 0.5433751110667576  , 0.5135338468278656  , 0.48386148295142284 , 0.45447258078317027 , 0.42547675249440225 , 0.39697805690529064 , 0.3690744491071638  ,
            0.3418572875154526  , 0.31541090142737277 , 0.28981222157879266 , 0.26513047559895897 , 0.24142694965583922 , 0.2187548169747535  , 0.1971590333047311  , 0.17667629880657815 ,
            0.15733508524972548 , 0.13915572683718952 , 0.1221505724346981  , 0.10632419646629884 , 0.0916736652592095  , 0.07818885517960072 , 0.06585281850222179 , 0.05464219260368143 ,
            0.04452764776459671 , 0.03547436861206109 , 0.02744256403271499 , 0.020388000239333876
    };

    /*! Data generated using scipy.signal.windows.kaiser(100, beta=(0.1102*(60.0 - 8.7)), sym=False) !*/
    const static double KAISER_DATA_N_100_ATT_60_PERIODIC[100] = {
        0.020388  , 0.02736726, 0.03530386, 0.0442408 , 0.05421678,
        0.06526578, 0.0774165 , 0.09069194, 0.10510897, 0.12067792,
        0.13740224, 0.15527819, 0.17429461, 0.19443265, 0.21566568,
        0.23795919, 0.2612707 , 0.28554985, 0.31073847, 0.33677071,
        0.3635733 , 0.39106578, 0.41916087, 0.44776486, 0.47677808,
        0.50609537, 0.5356067 , 0.56519774, 0.59475052, 0.62414415,
        0.65325551, 0.68196003, 0.71013245, 0.73764762, 0.76438133,
        0.79021107, 0.81501689, 0.83868214, 0.86109433, 0.88214579,
        0.90173451, 0.91976477, 0.9361478 , 0.95080246, 0.96365572,
        0.97464323, 0.98370975, 0.99080954, 0.99590669, 0.99897537,
        1.        , 0.99897537, 0.99590669, 0.99080954, 0.98370975,
        0.97464323, 0.96365572, 0.95080246, 0.9361478 , 0.91976477,
        0.90173451, 0.88214579, 0.86109433, 0.83868214, 0.81501689,
        0.79021107, 0.76438133, 0.73764762, 0.71013245, 0.68196003,
        0.65325551, 0.62414415, 0.59475052, 0.56519774, 0.5356067 ,
        0.50609537, 0.47677808, 0.44776486, 0.41916087, 0.39106578,
        0.3635733 , 0.33677071, 0.31073847, 0.28554985, 0.2612707 ,
        0.23795919, 0.21566568, 0.19443265, 0.17429461, 0.15527819,
        0.13740224, 0.12067792, 0.10510897, 0.09069194, 0.0774165 ,
        0.06526578, 0.05421678, 0.0442408 , 0.03530386, 0.02736726
    };

    void test_kaiser()
    {
        constexpr double tol = 1e-7;

        for (size_t i = 0 ; i < 100 ; ++i)
        {
            DLIB_TEST(std::abs(dlib::kaiser(i, 100, beta_t{10.0}, SYMMETRIC) -  KAISER_DATA_N_100_BETA_10[i]) < tol);
            DLIB_TEST(std::abs(dlib::kaiser(i, 100, attenuation_t{60.0}, SYMMETRIC) - KAISER_DATA_N_100_ATT_60_SYMMETRIC[i]) < tol);
            DLIB_TEST(std::abs(dlib::kaiser(i, 100, attenuation_t{60.0}, PERIODIC) - KAISER_DATA_N_100_ATT_60_PERIODIC[i]) < tol);
        }
    }

    /*! Data generated using scipy.signal.windows.hann(100, sym=True) !*/
    const static double HANN_SYMMETRIC[100] = {
            0.                   , 0.0010066617640578368, 0.00402259358460233  , 0.009035651368646702 , 0.016025649301821876 , 0.024964441129527337 , 0.03581603349196372  , 0.04853673085668947  ,
            0.06307531146510753  , 0.07937323358440945  , 0.09736487123447068  , 0.11697777844051105  , 0.1381329809474649   , 0.16074529422143397  , 0.1847236664577389   , 0.20997154521440098  ,
            0.23638726619474876  , 0.2638644626136587   , 0.29229249349905684  , 0.3215568892040641   , 0.3515398123358626   , 0.3821205322452864   , 0.41317591116653485  , 0.4445809000494945   ,
            0.476209042088129    , 0.5079329819174041   , 0.5396249784283943   , 0.5711574191366426   , 0.6024033340325954   , 0.6332369068450175   , 0.6635339816587109   , 0.6931725628465644   ,
            0.7220333063028871   , 0.7500000000000002   , 0.7769600319330552   , 0.8028048435688335   , 0.8274303669726426   , 0.8507374438531607   , 0.8726322248378774   , 0.8930265473713939   ,
            0.9118382907149164   , 0.9289917066174886   , 0.9444177243274617   , 0.9580542287160349   , 0.9698463103929542   , 0.9797464868072487   , 0.9877148934427036   , 0.9937194443381971   ,
            0.9977359612865423   , 0.9997482711915926   , 0.9997482711915926   , 0.9977359612865423   , 0.9937194443381971   , 0.9877148934427036   , 0.9797464868072487   , 0.9698463103929542   ,
            0.9580542287160347   , 0.9444177243274617   , 0.9289917066174884   , 0.9118382907149164   , 0.8930265473713936   , 0.8726322248378774   , 0.8507374438531605   , 0.8274303669726426   ,
            0.8028048435688333   , 0.7769600319330552   , 0.7499999999999998   , 0.722033306302887    , 0.6931725628465643   , 0.6635339816587109   , 0.6332369068450172   , 0.6024033340325952   ,
            0.5711574191366425   , 0.5396249784283943   , 0.5079329819174038   , 0.47620904208812875  , 0.4445809000494945   , 0.41317591116653496  , 0.3821205322452862   , 0.3515398123358625   ,
            0.3215568892040641   , 0.2922924934990565   , 0.2638644626136585   , 0.23638726619474876  , 0.20997154521440098  , 0.18472366645773858  , 0.1607452942214338   , 0.1381329809474649   ,
            0.11697777844051105  , 0.09736487123447057  , 0.07937323358440934  , 0.06307531146510753  , 0.04853673085668947  , 0.035816033491963606 , 0.02496444112952728  , 0.016025649301821876 ,
            0.009035651368646591 , 0.00402259358460233  , 0.0010066617640577813, 0.
    };

    /*! Data generated using scipy.signal.windows.hann(100, sym=False) !*/
    const static double HANN_PERIODIC[100] = {
            0.0000000000000000e+00, 9.8663578586422052e-04, 3.9426493427611176e-03, 8.8563746356556394e-03, 1.5708419435684462e-02, 2.4471741852423234e-02, 3.5111757055874326e-02, 4.7586473766990323e-02,
            6.1846659978068208e-02, 7.7836037248992462e-02, 9.5491502812526330e-02, 1.1474337861210543e-01, 1.3551568628929433e-01, 1.5772644703565564e-01, 1.8128800512565529e-01, 2.0610737385376349e-01,
            2.3208660251050178e-01, 2.5912316294914250e-01, 2.8711035421746367e-01, 3.1593772365766115e-01, 3.4549150281252633e-01, 3.7565505641757269e-01, 4.0630934270713781e-01, 4.3733338321784793e-01,
            4.6860474023534343e-01, 5.0000000000000011e-01, 5.3139525976465674e-01, 5.6266661678215224e-01, 5.9369065729286241e-01, 6.2434494358242754e-01, 6.5450849718747384e-01, 6.8406227634233907e-01,
            7.1288964578253644e-01, 7.4087683705085783e-01, 7.6791339748949849e-01, 7.9389262614623657e-01, 8.1871199487434487e-01, 8.4227355296434436e-01, 8.6448431371070589e-01, 8.8525662138789474e-01,
            9.0450849718747373e-01, 9.2216396275100765e-01, 9.3815334002193185e-01, 9.5241352623300979e-01, 9.6488824294412578e-01, 9.7552825814757682e-01, 9.8429158056431554e-01, 9.9114362536434442e-01,
            9.9605735065723899e-01, 9.9901336421413578e-01, 1.0000000000000000e+00, 9.9901336421413578e-01, 9.9605735065723888e-01, 9.9114362536434431e-01, 9.8429158056431554e-01, 9.7552825814757671e-01,
            9.6488824294412567e-01, 9.5241352623300979e-01, 9.3815334002193174e-01, 9.2216396275100743e-01, 9.0450849718747361e-01, 8.8525662138789452e-01, 8.6448431371070567e-01, 8.4227355296434425e-01,
            8.1871199487434465e-01, 7.9389262614623657e-01, 7.6791339748949805e-01, 7.4087683705085761e-01, 7.1288964578253600e-01, 6.8406227634233885e-01, 6.5450849718747373e-01, 6.2434494358242720e-01,
            5.9369065729286230e-01, 5.6266661678215180e-01, 5.3139525976465651e-01, 5.0000000000000000e-01, 4.6860474023534310e-01, 4.3733338321784782e-01, 4.0630934270713737e-01, 3.7565505641757246e-01,
            3.4549150281252633e-01, 3.1593772365766082e-01, 2.8711035421746367e-01, 2.5912316294914206e-01, 2.3208660251050156e-01, 2.0610737385376310e-01, 1.8128800512565496e-01, 1.5772644703565564e-01,
            1.3551568628929400e-01, 1.1474337861210532e-01, 9.5491502812526052e-02, 7.7836037248992351e-02, 6.1846659978068208e-02, 4.7586473766990101e-02, 3.5111757055874271e-02, 2.4471741852423068e-02,
            1.5708419435684406e-02, 8.8563746356556394e-03, 3.9426493427610620e-03, 9.8663578586422052e-04
    };

    void test_hann()
    {
        constexpr double tol = 1e-12;

        for (size_t i = 0 ; i < 100 ; ++i)
        {
            DLIB_TEST(std::abs(dlib::hann(i, 100, SYMMETRIC) - HANN_SYMMETRIC[i]) < tol);
            DLIB_TEST(std::abs(dlib::hann(i, 100, PERIODIC) - HANN_PERIODIC[i]) < tol);
        }
    }


    /*! Data generated using scipy.signal.windows.blackman(100, sym=True) !*/
    const static double BLACKMAN_SYMMETRIC[100] = {
            -1.3877787807814457e-17,  3.6304679052144573e-04,  1.4584896963108218e-03,  3.3050860099324703e-03,  5.9335994674046544e-03,  9.3860617320119799e-03,  1.3714756540369306e-02,
            1.8980944223451222e-02,  2.5253348873947708e-02,  3.2606434624560324e-02,  4.1118501260732659e-02,  5.0869632653865432e-02,  6.1939534213364275e-02,  7.4405297672890849e-02,
            8.8339133012523580e-02,  1.0380610814900720e-01,  1.2086193718628682e-01,  1.3955085750436985e-01,  1.5990363478343400e-01,  1.8193573323000373e-01,  2.0564568582147591e-01,
            2.3101369635289254e-01,  2.5800050150366216e-01,  2.8654651709866197e-01,  3.1657128828228220e-01,  3.4797325852674926e-01,  3.8062986733428278e-01,  4.1439798124748289e-01,
            4.4911465743802986e-01,  4.8459823378621947e-01,  5.2064973407928783e-01,  5.5705457183005869e-01,  5.9358453133187383e-01,  6.3000000000000023e-01,  6.6605242187760483e-01,
            7.0148693847363075e-01,  7.3604517991077978e-01,  7.6946816674637608e-01,  8.0149928082995836e-01,  8.3188726221214804e-01,  8.6038918844226620e-01,  8.8677339259930321e-01,
            9.1082227709315766e-01,  9.3233498164060546e-01,  9.5112986584247239e-01,  9.6704676943374324e-01,  9.7994901650563326e-01,  9.8972513375747284e-01,  9.9629025706755892e-01,
            9.9958720530934331e-01,  9.9958720530934331e-01,  9.9629025706755892e-01,  9.8972513375747273e-01,  9.7994901650563326e-01,  9.6704676943374313e-01,  9.5112986584247239e-01,
            9.3233498164060524e-01,  9.1082227709315766e-01,  8.8677339259930310e-01,  8.6038918844226620e-01,  8.3188726221214782e-01,  8.0149928082995836e-01,  7.6946816674637586e-01,
            7.3604517991077978e-01,  7.0148693847363042e-01,  6.6605242187760483e-01,  6.2999999999999967e-01,  5.9358453133187350e-01,  5.5705457183005858e-01,  5.2064973407928783e-01,
            4.8459823378621902e-01,  4.4911465743802959e-01,  4.1439798124748278e-01,  3.8062986733428278e-01,  3.4797325852674893e-01,  3.1657128828228198e-01,  2.8654651709866197e-01,
            2.5800050150366227e-01,  2.3101369635289232e-01,  2.0564568582147583e-01,  1.8193573323000373e-01,  1.5990363478343378e-01,  1.3955085750436971e-01,  1.2086193718628682e-01,
            1.0380610814900720e-01,  8.8339133012523385e-02,  7.4405297672890752e-02,  6.1939534213364275e-02,  5.0869632653865432e-02,  4.1118501260732618e-02,  3.2606434624560275e-02,
            2.5253348873947708e-02,  1.8980944223451222e-02,  1.3714756540369251e-02,  9.3860617320119660e-03,  5.9335994674046544e-03,  3.3050860099324147e-03,  1.4584896963108357e-03,
            3.6304679052139022e-04, -1.3877787807814457e-17
    };

    /*! Data generated using scipy.signal.windows.blackman(100, sym=False) !*/
    const static double BLACKMAN_PERIODIC[100] = {
            -1.3877787807814457e-17,  3.5581189102243393e-04,  1.4293022330515853e-03,  3.2384935067157478e-03,  5.8129538391935298e-03,  9.1931014024190100e-03,  1.3429247249587210e-02,
            1.8580392946885453e-02,  2.4712803576387936e-02,  3.1898380574198255e-02,  4.0212862362522098e-02,  4.9733883778963359e-02,  6.0538927851639349e-02,  7.2703205473310564e-02,
            8.6297499958797236e-02,  1.0138601430376767e-01,  1.1802425918529594e-01,  1.3625701935082268e-01,  1.5611643503756847e-01,  1.7762023346394817e-01,  2.0077014326253051e-01,
            2.2555052201406356e-01,  2.5192722383607768e-01,  2.7984673032755741e-01,  3.0923556413018516e-01,  3.4000000000000014e-01,  3.7202608365949852e-01,  4.0517996389186173e-01,
            4.3930853842180234e-01,  4.7424040917891841e-01,  5.0978713763747807e-01,  5.4574478614862609e-01,  5.8189572660264122e-01,  6.1801069345253812e-01,  6.5385105416429268e-01,
            6.8917126659624084e-01,  7.2372148970748695e-01,  7.5725031140199939e-01,  7.8950755527305094e-01,  8.2024712655475274e-01,  8.4922985673746942e-01,  8.7622630607621343e-01,
            9.0101948362025164e-01,  9.2340744541290509e-01,  9.4320573313783873e-01,  9.6024961769757267e-01,  9.7439611496782463e-01,  9.8552574423540451e-01,  9.9354400354752948e-01,
            9.9838254031929408e-01,  9.9999999999999989e-01,  9.9838254031929408e-01,  9.9354400354752936e-01,  9.8552574423540440e-01,  9.7439611496782452e-01,  9.6024961769757256e-01,
            9.4320573313783851e-01,  9.2340744541290487e-01,  9.0101948362025142e-01,  8.7622630607621310e-01,  8.4922985673746942e-01,  8.2024712655475229e-01,  7.8950755527305072e-01,
            7.5725031140199917e-01,  7.2372148970748662e-01,  6.8917126659624084e-01,  6.5385105416429223e-01,  6.1801069345253778e-01,  5.8189572660264077e-01,  5.4574478614862598e-01,
            5.0978713763747785e-01,  4.7424040917891802e-01,  4.3930853842180212e-01,  4.0517996389186128e-01,  3.7202608365949830e-01,  3.4000000000000002e-01,  3.0923556413018483e-01,
            2.7984673032755730e-01,  2.5192722383607730e-01,  2.2555052201406339e-01,  2.0077014326253051e-01,  1.7762023346394792e-01,  1.5611643503756847e-01,  1.3625701935082243e-01,
            1.1802425918529577e-01,  1.0138601430376741e-01,  8.6297499958797041e-02,  7.2703205473310564e-02,  6.0538927851639154e-02,  4.9733883778963317e-02,  4.0212862362521952e-02,
            3.1898380574198214e-02,  2.4712803576387936e-02,  1.8580392946885335e-02,  1.3429247249587210e-02,  9.1931014024189267e-03,  5.8129538391935159e-03,  3.2384935067157478e-03,
            1.4293022330515576e-03,  3.5581189102243393e-04
    };

    void test_blackman()
    {
        constexpr double tol = 1e-12;

        for (size_t i = 0 ; i < 100 ; ++i)
        {
            DLIB_TEST(std::abs(dlib::blackman(i, 100, SYMMETRIC) - BLACKMAN_SYMMETRIC[i]) < tol);
            DLIB_TEST(std::abs(dlib::blackman(i, 100, PERIODIC) - BLACKMAN_PERIODIC[i]) < tol);
        }
    }

    /*! Data generated using scipy.signal.windows.nuttall(100, sym=True) !*/
    const static double NUTTALL_SYMMETRIC[100] = {
        3.6280000000003809e-04, 4.4100256501290042e-04, 6.8237717083790596e-04, 1.1072071925914643e-03, 1.7492358328481923e-03, 2.6555567644544606e-03, 3.8864304903093311e-03, 5.5149979560592853e-03,
       7.6268576868341242e-03, 1.0319469437575945e-02, 1.3701346310712331e-02, 1.7890998671380040e-02, 2.3015597041407512e-02, 2.9209327432819628e-02, 3.6611421135571982e-02, 4.5363851544586317e-02,
       5.5608702844613458e-02, 6.7485228831599756e-02, 8.1126634332239989e-02, 9.6656626036440804e-02, 1.1418579349929589e-01, 1.3380789401228413e-01, 1.5559612641629050e-01, 1.7959948819872706e-01,
       2.0583931691015916e-01, 2.3430612065805795e-01, 2.6495680288791129e-01, 2.9771238365532210e-01, 3.3245631305602980e-01, 3.6903346246728608e-01, 4.0724986594218082e-01, 4.4687326778849357e-01,
       4.8763451346935721e-01, 5.2922980000000031e-01, 5.7132377958430358e-01, 6.1355348700461687e-01, 6.5553303796059825e-01, 6.9685902288122648e-01, 7.3711649943820157e-01, 7.7588546776980583e-01,
       8.1274769593008156e-01, 8.4729374988169215e-01, 8.7913007292891454e-01, 9.0788595420393170e-01, 9.3322022491232959e-01, 9.5482752461426401e-01, 9.7244398782728703e-01, 9.8585221350603325e-01,
       9.9488539616776150e-01, 9.9943051714966413e-01, 9.9943051714966413e-01, 9.9488539616776150e-01, 9.8585221350603292e-01, 9.7244398782728703e-01, 9.5482752461426390e-01, 9.3322022491232959e-01,
       9.0788595420393159e-01, 8.7913007292891454e-01, 8.4729374988169193e-01, 8.1274769593008156e-01, 7.7588546776980549e-01, 7.3711649943820157e-01, 6.9685902288122625e-01, 6.5553303796059825e-01,
       6.1355348700461665e-01, 5.7132377958430358e-01, 5.2922979999999964e-01, 4.8763451346935693e-01, 4.4687326778849346e-01, 4.0724986594218082e-01, 3.6903346246728569e-01, 3.3245631305602963e-01,
       2.9771238365532204e-01, 2.6495680288791129e-01, 2.3430612065805764e-01, 2.0583931691015900e-01, 1.7959948819872706e-01, 1.5559612641629056e-01, 1.3380789401228399e-01, 1.1418579349929583e-01,
       9.6656626036440804e-02, 8.1126634332239850e-02, 6.7485228831599686e-02, 5.5608702844613458e-02, 4.5363851544586317e-02, 3.6611421135571871e-02, 2.9209327432819576e-02, 2.3015597041407512e-02,
       1.7890998671380040e-02, 1.3701346310712311e-02, 1.0319469437575928e-02, 7.6268576868341242e-03, 5.5149979560592853e-03, 3.8864304903093033e-03, 2.6555567644544449e-03, 1.7492358328481923e-03,
       1.1072071925914279e-03, 6.8237717083792677e-04, 4.4100256501283970e-04, 3.6280000000003809e-04
    };

    /*! Data generated using scipy.signal.windows.nuttall(100, sym=False) !*/
    const static double NUTTALL_PERIODIC[100] = {
        3.6280000000003809e-04, 4.3943533275720911e-04, 6.7584165234203970e-04, 1.0915036026995974e-03, 1.7188369763968692e-03, 2.6030862749787794e-03, 3.8021530763779204e-03, 5.3863288716700184e-03,
       7.4379011062130603e-03, 1.0050598032562322e-02, 1.3328836896113092e-02, 1.7386741085282861e-02, 2.2346895249321715e-02, 2.8338812984825948e-02, 3.5497099385972460e-02, 4.3959300319126524e-02,
       5.3863441409176309e-02, 6.5345272026252857e-02, 7.8535242588636409e-02, 9.3555256755636085e-02, 1.1051525304987181e-01, 1.2950968258966034e-01, 1.5061396040820060e-01, 1.7388097679708006e-01,
       1.9933776179738055e-01, 2.2698240000000011e-01, 2.5678129391820559e-01, 2.8866687216573916e-01, 3.2253583342361525e-01, 3.5824800872903634e-01, 3.9562591310388706e-01, 4.3445504320146194e-01,
       4.7448496083601144e-01, 5.1543118341228056e-01, 5.5697788191453779e-01, 5.9878136583463215e-01, 6.4047431285052248e-01, 6.8167067987028529e-01, 7.2197121189556734e-01, 7.6096944667822275e-01,
       7.9825809695012828e-01, 8.3343567864372392e-01, 8.6611324345525398e-01, 8.9592106770368241e-01, 9.2251514696652437e-01, 9.4558334757126272e-01, 9.6485107170490669e-01, 9.8008630256548490e-01,
       9.9110390938483894e-01, 9.9776910895165682e-01, 1.0000000000000000e+00, 9.9776910895165682e-01, 9.9110390938483883e-01, 9.8008630256548479e-01, 9.6485107170490658e-01, 9.4558334757126239e-01,
       9.2251514696652415e-01, 8.9592106770368229e-01, 8.6611324345525376e-01, 8.3343567864372370e-01, 7.9825809695012806e-01, 7.6096944667822231e-01, 7.2197121189556712e-01, 6.8167067987028518e-01,
       6.4047431285052203e-01, 5.9878136583463215e-01, 5.5697788191453712e-01, 5.1543118341228022e-01, 4.7448496083601088e-01, 4.3445504320146161e-01, 3.9562591310388689e-01, 3.5824800872903600e-01,
       3.2253583342361514e-01, 2.8866687216573877e-01, 2.5678129391820537e-01, 2.2698240000000006e-01, 1.9933776179738022e-01, 1.7388097679708001e-01, 1.5061396040820030e-01, 1.2950968258966020e-01,
       1.1051525304987181e-01, 9.3555256755635904e-02, 7.8535242588636409e-02, 6.5345272026252704e-02, 5.3863441409176184e-02, 4.3959300319126357e-02, 3.5497099385972349e-02, 2.8338812984825948e-02,
       2.2346895249321656e-02, 1.7386741085282851e-02, 1.3328836896113022e-02, 1.0050598032562313e-02, 7.4379011062130603e-03, 5.3863288716699594e-03, 3.8021530763779447e-03, 2.6030862749787369e-03,
       1.7188369763968692e-03, 1.0915036026995974e-03, 6.7584165234202756e-04, 4.3943533275720564e-04
    };

    void test_blackman_nutall()
    {
        constexpr double tol = 1e-12;

        for (size_t i = 0 ; i < 100 ; ++i)
        {
            DLIB_TEST(std::abs(dlib::blackman_nuttall(i, 100, SYMMETRIC) - NUTTALL_SYMMETRIC[i]) < tol);
            DLIB_TEST(std::abs(dlib::blackman_nuttall(i, 100, PERIODIC) - NUTTALL_PERIODIC[i]) < tol);
        }
    }

    /*! Data generated using scipy.signal.windows.blackmanharris(100, sym=True) !*/
    const static double BLACKHARRIS_SYMMETRIC[100] = {
            6.0000000000001025e-05, 1.1753451824995757e-04, 2.9683951850042849e-04, 6.1801672663547129e-04, 1.1145550225252401e-03, 1.8332911984701179e-03, 2.8343195392041701e-03, 4.1908170589769929e-03,
       5.9887449577851852e-03, 8.3263828018010373e-03, 1.1313650388085572e-02, 1.5071173410218162e-02, 1.9729052973734545e-02, 2.5425305672636660e-02, 3.2303950165337936e-02, 4.0512727699811686e-02,
       5.0200457447177660e-02, 6.1514042331896363e-02, 7.4595156741336377e-02, 8.9576663449003821e-02, 1.0657882265314569e-01, 1.2570537056661518e-01, 1.4703955786238149e-01, 1.7064024889071255e-01,
       1.9653819041233156e-01, 2.2473256319618079e-01, 2.5518793087465025e-01, 2.8783169771634431e-01, 3.2255218037975769e-01, 3.5919738829980252e-01, 3.9757459331953471e-01, 4.3745075183192111e-01,
       4.7855382248643563e-01, 5.2057500000000023e-01, 5.6317186144322950e-01, 6.0597239627669564e-01, 6.4857986616342533e-01, 6.9057841598247094e-01, 7.3153933431039764e-01, 7.7102784068886565e-01,
       8.0861025896612271e-01, 8.4386142151557042e-01, 8.7637213871896336e-01, 9.0575656215584455e-01, 9.3165926872740046e-01, 9.5376189657709320e-01, 9.7178917211400495e-01, 9.8551418050652684e-01,
       9.9476274935430398e-01, 9.9941683638788681e-01, 9.9941683638788681e-01, 9.9476274935430398e-01, 9.8551418050652684e-01, 9.7178917211400495e-01, 9.5376189657709309e-01, 9.3165926872740046e-01,
       9.0575656215584421e-01, 8.7637213871896336e-01, 8.4386142151557020e-01, 8.0861025896612271e-01, 7.7102784068886543e-01, 7.3153933431039764e-01, 6.9057841598247072e-01, 6.4857986616342533e-01,
       6.0597239627669530e-01, 5.6317186144322950e-01, 5.2057499999999957e-01, 4.7855382248643535e-01, 4.3745075183192089e-01, 3.9757459331953471e-01, 3.5919738829980208e-01, 3.2255218037975747e-01,
       2.8783169771634426e-01, 2.5518793087465025e-01, 2.2473256319618046e-01, 1.9653819041233139e-01, 1.7064024889071255e-01, 1.4703955786238157e-01, 1.2570537056661499e-01, 1.0657882265314562e-01,
       8.9576663449003821e-02, 7.4595156741336224e-02, 6.1514042331896307e-02, 5.0200457447177660e-02, 4.0512727699811686e-02, 3.2303950165337832e-02, 2.5425305672636612e-02, 1.9729052973734545e-02,
       1.5071173410218162e-02, 1.1313650388085560e-02, 8.3263828018010164e-03, 5.9887449577851852e-03, 4.1908170589769929e-03, 2.8343195392041562e-03, 1.8332911984701005e-03, 1.1145550225252401e-03,
       6.1801672663546088e-04, 2.9683951850044757e-04, 1.1753451824992461e-04, 6.0000000000001025e-05
    };

    /*! Data generated using scipy.signal.windows.blackmanharris(100, sym=False) !*/
    const static double BLACKHARRIS_PERIODIC[100] = {
            6.0000000000001025e-05, 1.1637868895762564e-04, 2.9195214423187975e-04, 6.0603009811725436e-04, 1.0907824408156620e-03, 1.7912028767559556e-03, 2.7650252622427032e-03, 4.0825619409767342e-03,
            5.8264275279121154e-03, 8.0911077369656137e-03, 1.0982331276248921e-02, 1.4616203723189114e-02, 1.9118065715765107e-02, 2.4621043722600426e-02, 3.1264269943853472e-02, 3.9190758303143156e-02,
            4.8544935678745460e-02, 5.9469841066283079e-02, 7.2104019771978223e-02, 8.6578154460304785e-02, 1.0301148934566379e-01, 1.2150811743692316e-01, 1.4215321293999914e-01, 1.6500930115398998e-01,
            1.9011266597168353e-01, 2.1747000000000014e-01, 2.4705540402489781e-01, 2.7880784083750426e-01, 3.1262914320741680e-01, 3.4838266704988291e-01, 3.8589266872375122e-01, 4.2494447017550130e-01,
            4.6528545768463220e-01, 5.0662693974445194e-01, 5.4864686769662807e-01, 5.9099339976627185e-01, 6.3328926580680434e-01, 6.7513686707919696e-01, 7.1612402348243798e-01, 7.5583026052615354e-01,
            7.9383351065433627e-01, 8.2971708888766138e-01, 8.6307679166135332e-01, 8.9352796060241313e-01, 9.2071235010195152e-01, 9.4430463905382944e-01, 9.6401843307237856e-01, 9.7961161375446715e-01,
            9.9089090586427409e-01, 9.9771555131446132e-01, 1.0000000000000000e+00, 9.9771555131446132e-01, 9.9089090586427409e-01, 9.7961161375446704e-01, 9.6401843307237833e-01, 9.4430463905382900e-01,
            9.2071235010195118e-01, 8.9352796060241302e-01, 8.6307679166135309e-01, 8.2971708888766105e-01, 7.9383351065433605e-01, 7.5583026052615288e-01, 7.1612402348243764e-01, 6.7513686707919673e-01,
            6.3328926580680400e-01, 5.9099339976627185e-01, 5.4864686769662740e-01, 5.0662693974445161e-01, 4.6528545768463153e-01, 4.2494447017550108e-01, 3.8589266872375122e-01, 3.4838266704988252e-01,
            3.1262914320741664e-01, 2.7880784083750382e-01, 2.4705540402489762e-01, 2.1747000000000008e-01, 1.9011266597168322e-01, 1.6500930115398990e-01, 1.4215321293999886e-01, 1.2150811743692301e-01,
            1.0301148934566379e-01, 8.6578154460304618e-02, 7.2104019771978223e-02, 5.9469841066282912e-02, 4.8544935678745342e-02, 3.9190758303142989e-02, 3.1264269943853423e-02, 2.4621043722600426e-02,
            1.9118065715764999e-02, 1.4616203723189107e-02, 1.0982331276248855e-02, 8.0911077369656033e-03, 5.8264275279121154e-03, 4.0825619409766874e-03, 2.7650252622427257e-03, 1.7912028767559122e-03,
            1.0907824408156758e-03, 6.0603009811725436e-04, 2.9195214423186414e-04, 1.1637868895762217e-04
    };

    void test_blackman_harris()
    {
        constexpr double tol = 1e-12;

        for (size_t i = 0 ; i < 100 ; ++i)
        {
            DLIB_TEST(std::abs(dlib::blackman_harris(i, 100, SYMMETRIC) - BLACKHARRIS_SYMMETRIC[i]) < tol);
            DLIB_TEST(std::abs(dlib::blackman_harris(i, 100, PERIODIC) - BLACKHARRIS_PERIODIC[i]) < tol);
        }
    }

    class math_tester : public tester
    {
    public:
        math_tester (
        ) :
            tester ("test_math", "Runs tests on the math functions")
        {}

        void perform_test (
        )
        {
            test_cyl_bessel_i<float>();
            test_cyl_bessel_i<double>();
            test_cyl_bessel_j<float>();
            test_cyl_bessel_j<double>();
            test_kaiser();
            test_hann();
            test_blackman();
            test_blackman_nutall();
            test_blackman_harris();
        }
    } a;
}