#include <bits/stdc++.h>

using namespace std;

string reverseStr(string &str)
{
    // cout << "in w3\n";

    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    return str;
}

string solve(string A)
{
    stack<char> st, st2;
    string B = "";
    int i = 1, t = 0;
    char c,d;
    st.push('/');
    while (A[i] != '\0')
    {
        // cout << "in w1\n";
        if (A[i] != '.')
        {

            st.push(A[i]);
        }
        else
        {
            if (!st.empty())
            {
                while (st.top() != '/')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        i++;
    }

    if (st.empty())
    {
        // cout << "in";
        B = B + "/";
        return B;
    }
    else
    {   if(st.top()=='/'){
        if (!st.empty())
                {
                    st.pop();
                }
        }
        while (!st.empty())
        {
            // cout << "in w2 ";
            if (st.top() != '/' || st.top() != '.')
                t = 1;

            c = st.top();
            // cout <<c<<endl;
            if ((st.top() == '/' && d == '/'))
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                B = B + c;
                d=c;
                if (!st.empty())
                {
                    st.pop();
                }
            }
        }
        if (t == 0)
        {
            // cout << "in if";
            B = "/";
            return B;
        }
    }

    B = reverseStr(B);

    // cout << " res: " << B << endl;
    return B;
}

int main()
{

    string A;
A = "/../sah/zjh/xyi/uvw/gxj/hmd/jcd/../ysw/bfc/../jji/qmx/tli/././oae/.././epm/zuw/cra/ihl/../kej/mdw/kdp/ffa/eap/zan/jnl/zdb/./mfh/cyu/./oxe/././usf/wwi/xri/rja/efg/cnq/../wye/nte/yaw/yyz/./yxe/wjs/zhu/ksz/fqe/././../../hgm/../acw/edx/odn/ffu/exc/../lzm/dir/was/aeh/bqe/lya/ibf/whx/../../roj/ggg/ntm/fdk/rca/rqp/rxd/dgz/hnd/./mcv/../ije/obl/./pwh/hir/./dfk/../ldd/./spt/tfn/mii/./fvh/../ytn/yey/vnm/../inw/zmg/../../pys/rha/upw/../fjd/../qus/rtn/cib/xcg/ovq/../../../yfq/qhq/wpd/../nyn/bzd/jzw/iwh/ezo/rwe/../wqz/ryn/igg/./koe/../zba/../afw/kfl/../../suv/wiu/ntk/./zzv/lgh/jfc/./sar/./../../ldc/gcr/hhr/../../how/../../njw/erw/kjr/phf/vlg/gim/klc/../klj/./././wli/jrv/flp/./iht/tre/rit/kzi/dcp/iww/bio/../././ouf/gsr/dgf/jhv/ntg/xth/hln/../../jin/vse/./.././bap/jfn/wma/ecm/ohi/nss/mxv/dju/./zug/zjz/ixz/psy/sdf/./zxe/kbt/../qbr/./../gzn/./kfs/dki/nng/../exf/uwj/nja/yqv/./ooz/kyw/ayd/ecc/guz/mdd/../fsm/././iqa/fbl/lwi/hat/./npa/../vcx/acx/ucf/tsk/upt/kbp/./keg/././yeg/dse/jdz/./lez/../../sob/yfv/aez/iks/ieh/lij/../tqb/../xxr/jpp/./kgj/qya/../kub/kwv/./hdf/./rkh/./iqb/../yxk/./mnd/../ofs/cud/ztn/syp/./../wia/wjp/glf/yez/bso/.././ylz/tpd/lqz/../deb/gin/pqx/./././evf/mgw/msc/vmr/eps/xso/wqx/zrl/tcu/./../../npb/../././wfh/../../gos/./yiz/../lxl/././iyf/kzm/rja/fzc/zfj/../pli/../../ujm/mwm/vzj/tqg/dnr/yav/zot/vqv/./pkk/dmp/uvd/../zdh/gjc/ars/zvp/./pqm/ohs/kyz/xhw/jrw/./xzy/./sds/../qaf/emx/izn/.././gbr/glo/tae/awu/lgr/rky/ced/./././../ptl/./hgs/lng/ewh/kpu/ijt/gbv/xgg/../vwo/./wsb/./sus/../ena/../cxf/../dyd/ord/../dwy/./.././cso/kqe/dhk/mce/erj/por/sqj/ify/./././ota/cxd/../rvf/rtv/pft/../mxa/djy/oak/wmr/jjx/kzp/nnz/zjn/pxj/././rus/rnb/ztl/../../../qyy/../szm/././jlu/cfs/wvj/jii/haz/niu/hia/bro/sgh/xdg/hlk/./nrl/apf/../ojy/hjm/wvu/btk/sll/dmj/rdo/../puh/kbf/bei/xhe/../utp/jvv/tqw/hay/./ncr/../qbm/../lvl/ixb/aln/././../../glk/../sfp/rsf/.././pkm/mjr/awz/ugk/./uyz/./qit/anz/coa/cpk/../ksa/inv/hzv/mri/./cjm/pis/wsv/gli/huz/xkd/iqf/orb/utt/../ejg/ytx/jdv/gro/./kvy/./qqp/../rox/chd/lin/czi/fly/iqn/././och/lac/./dht/tjv/qbc/gos/../juf/../tqu/fxu/./vij/pjh/eha/../../qvr/kjq/aql/../../bzb/oix/lby/dhf/.././csp/mux/../ccb/wyh/./eum/kgw/../../././vtw/fgi/iyh/../../afj/././../lty/umu/./../nft/./acs/afc/././cbz/zhj/jqc/eer/irs/qfg/./hcy/qhh/ozs/zah/efv/mvl/../../../lad/./whf/ogj/yjy/../orc/hxr/oum/./bbr/../urj/rzn/../scu/cjd/joi/dax/ceg/ocv/bsh/rkr/bls/../ifw/wft/kxw/eak/kbr/rgo/dpu/jnv/rkf/zqm/jqb/./ktt/dxn/./pme/qlx/../lmu/gyd/oej/./pik/../../../zln/him/dze/xmp/./wuq/./dfz/bfw/xqm/ani/./wjs/joc/dzb/rxf/.././ckr/vud/aix/bgx/hqj/sbs/sve/dka/./dza/fxz/hmc/ghd/qdk/mfb/zzp/./eej/../gvm/zim/./yck/../cww/../././.././sdj/.././tnw/sho/opq/kfq/./zuh/idb/wsu/wqd/./mjp/use/exj/../xgh/gqu/lif/../mtl/oon/sfu/./fwu/./agx/././yls/./rnm/jkf/eex/ipn/zwu/ufr/./.././sxj/lxd/.././tom/bsz/../jzh/glq/txa/ooh/wdu/biu/bia/./../srq/./tny/uhj/./nbx/yvb/nil/.././.././lqc/./kpo/ehq/././../xae/wzo/cen/./hgm/rbo/mnr/bid/eoo/.././ydb/ybd/upn/hwp/ejx/./nil/omn/rkj/./qdm/rog/../ldi/../../yrv/././../icd/./../mdy/zxc/../dks/../ypp/ixu/xdm/wtx/irq/oeg/jmz/./../vlq/wfp/dgi/dgt/weo/gup/aan/dfr/jzj/wcv/./nfz/xdt/../qyk/../qpz/qbm/../ekn/fbb/war/../gib/pyr/smh/./lwy/kow/wlx/././jva/msf/../lvu/../ard/szh/gsg/../lio/../bkc/ddf/joy/./yat/llm/wxm/gty/./dgo/hjm/lur/./../yac/././lyn/mru/dqy/zvb/ehj/zuz/zdz/../nsw/vhp/.././egg/jod/../vnh/././../bst/hoc/orx/../././.././../sox/.././././cdp/../.././nlm/./../ovi/dgo/qcw/dwz/./arr/nww/../oek/yqp/sck/htx/../../kww/bfg/xnz/./axu/clh/pgz/osr/qwm/xrs/cmg/kaf/zak/xlq/fha/nby/xta/ekq/oqp/lgr/../qej/././ejt/ctk/zvf/mkc/cyz/../ola/././././tem/lce/zyw/aqh/./qln/eoh/jvp/./wjd/./hqk/emj/agi/cik/./xti/kuh/./dkk/./mzr/./hoe/./nxs/./kzt/jeg/ifk/./../rbr/../ssk/wqa/./pnk/././../wte/tfb/../../gzb/qof/./mfo/wvz/ttd/./phi/../vln/ipm/vlo/rbj/./rgy/zxp/../xln/lzx/cjm/./mvv/../crc/cuu/izo/eax/./bmy/././ove/fso/bgc/./kkp/ihx/maq/sqd/mbi/yna/../uzq/udq/wye/.././bsz/hrp/qwq/jyj/cyu/../../esn/oqy/../.././upg/gym/./izd/.././rqm/../mtx/../zqi/./yky/./xvp/./twp/hvy/ish/../quj/././././jwn/sum/seq/afb/../../klj/byr/lcw/././hjx/rsd/./npn/dsr/tzn/beh/./jsg/../lfv/soa/uxn/zvb/ngg/xgk/gaw/hzo/trd/../qrw/drl/aij/aja/zly/uzm/xmd/edx/././vwa/cds/ieo/lwg/afd/./ubq/vdv/ubk/./jtq/../vwc/lhb/././qcg/bvu/elj/fug/./goc/guw/uow/yhw/xbs/ntt/../../gmw/qrq/jbe/.././././rdc/mqc/../../myy/fqk/frj/kwe/xtj/jaf/sda/xsn/zbe/./tri/fps/dcp/qld/iex/wel/.././qhb/wbp/./../obz/./dcf/fwi/../dyp/./../xwp/fww/hnq/.././fmp/../nac/hnz/slj/././vwn/../wom/../qtg/nmq/./asx/kfn/nsy/./pbq/gnz/bqc/goe/../../oat/../kjt/hdu/../.././vsf/wgd/gsm/tbm/owl/zbx/hov/hpr/axq/jfj/../../rzy/.././jgc/./fpr/nww/./../hpi/../xrf/./././arm/././cut/hrq/../tcw/bum/axo/fer/iww/../../cgw/.././ple/hhr/mwd/./eai/cse/uxy/../rff/pfk/mmq/emf/../ipp/fja/sth/./zkz/../etb/.././ggp/vce/fhx/./izz/.././lwq/tiy/thk/../../sbu/uut/crn/vha/ena/./../mhv/ukn/hjo/dnd/./ksd/dfd/bvr/xly/uqh/../../frm/../ryp/ciz/mwr/../gbt/qhq/eey/cnz/../pji/cgw/kkh/uwh/././uhy/cor/./../fyq/toy/vjb/zfq/adu/././vla/././../mui/../qba/opw/./omy/../nvi/./dlz/../flm/hcm/vup/hka/qgh/zvt/nui/../uje/gug/./tvm/ltl/upx/dnf/fri/kea/./atw/../nic/tnu/gyo/ccn/./../klv/../uzs/dsc/ibs/gac/crx/./ysh/wch/rdr/lmp/zuy/fyi/dto/./jmp/./rav/aym/lce/arc/idi/atn/../npc/./ais/qig/../kog/./pxe/wnv/gah/eru/qhv/aeb/../ccc/ngc/nvn/fje/jji/qov/gjw/pek/eav/qgb/eoz/./rjz/../dcy/jgb/../foe/mcv/././txp/hbf/../../../../mgd/../fgq/yjv/ahm/./../big/xzy/./sth/./qrl/./lim/./gud/qln/skb/././eue/../aet/hfv/aej/gkx/./puh/yhc/xzg/nxv/fpr/../roj/../cyd/mcs/././zeo/./blu/./wry/./qcf/./luc/pkv/xqx/yrk/./vrc/mpd/fnf/zwt/uss/nri/pnj/sed/./eoo/ugm/sfw/../bcv/../esf/pvq/mns/gxr/././rfo/oij/../ict/./lef/aya/pwv/tht/dkl/../fim/./rou/gyu/mum/gro/jrc/./../qqp/./././hys/././././swh/tko/eiz/tag/ews/jqo/oyk/./hlb/sqd/./jpk/are/yjl/gdd/../gvn/ani/ozq/././zea/../bxe/ycr/pme/././../../../jzt/wqi/uul/../.././wfu/vln/yjm/axv/kvk/asl/../wxz/ikm/./qte/./cyk/./oco/./dzo/jbp/xcq/./ruy/../../././hdj/./quv/cio/nmv/jke/xgo/osv/gyv/./../../uvh/yop/cfv/puw/qci/dxi/mdy/lwo/.././buz/wrl/snb/xvx/lkc/tta/../fwp/xlh/mie/./nao/mvt/ows/../dkh/ybz/ota/.././yru/ljv/idh/zsu/ifp/nxm/jti/lef/vll/../iwd/kef/tqz/.././hhn/ygr/../xio/lhx/qvn/bea/vfk/./jgw/../fta/hvo/ued/../xkt/rsl/.././hnf/././xqq/eyz/././ajp/././ssy/../vox/./../../mtr/dqk/wqc/./mli/bbl/.././qjk/bil/./drv/gsv/./ked/qxs/../cxu/swu/././mhn/./kkm/./ilg/jun/lac/hmz/pla/bra/nzh/../cig/zzr/rit/gui/loj/eiw/gjh/../nwi/./../ooi/tmq/aii/vqk/../dao/./vru/../ets/./../kdp/./dix/nrh/vwk/../uht/./././jxv/iru/wdp/./qpl/../cxo/uke/xps/../../././.././iuo/mjv/tqw/../iix/../noi/../uxm/tzq/qmp/../gxk/./qhe/rqf/vsv/./../rud/../../.././../.././dig/./zig/../drt/giq/././wji/hre/../mzx/./fsy/ess/fcy/./tjw/hwe/uel/yvo/../cas/./pwx/urt/../bsu/vle/rwh/../aba/fpc/qin/rme/.././xgd/../../mfu/zks/wvs/./../shu/nxw/dhc/aax/qev/swu/tdk/./qqm/mva/jkr/./hjs/mfk/mgu/./elh/./././gwf/uqg/ggj/ybr/../ohf/../pio/../../zvl/bge/./../cwg/../../../hbw/zah/mjt/../ucr/../../juj/./././../ugd/../ygm/./tho/uax/gxr/./nff/gem/hae/din/wpc/gbu/../wdb/gdk/guc/nqy/./skb/lzq/lla/uyk/bez/gbo/../../mmv/gsc/../../yrd/pug/./zgk/../nks/.././xxn/././lor/fto/wzd/oqb/dfe/./fgh/fvd/lnt/dhj/vai/shz/qob/../nox/./ypr/etp/yie/../eqy/../rht/wup/./xyi/./gui/clr/mpf/zhz/wjc/../.././urc/msd/ytf/gco/../vef/tav/opc/wlo/../../hnd/tmq/./../cfa/xuk/xtg/.././ydx/kte/../fuv/ftt/vds/./rsg/utu/./nnv/few/dio/./ass/././ngk/smv/../ubt/../spn/../wwj/../ynq/rtr/bmf/./jbx/././dpm/../rtt/../ncu/../umb/./gmr/rxf/rrs/.././../fzt/cbp/ykl/vcl/yfd/xro/drj/twy/qgd/xdr/lht/sqs/./eiz/ibw/./onh/otb/gpa/jtu/llf/../zpt/gww/./gqe/vkt/./../ofr/../neq/ghi/dog/qct/igr/kjg/./dzm/opm/jli/./../bcx/xpf/pnd/../.././cyz/qtl/./kot/ojs/mop/did/./pdh/../../qci/yoc/./bei/fzk/.././gmm/rga/qmw/./ddo/lja/mut/tua/fvt/aum/ssi/wbx/./uqi/ksm/mnx/xyg/bdo/./poo/frn/../aph/ndy/lvb/mmy/kyh/kpb/zrv/./uyu/gro/./slj/./qik/tdj/../qfs/wlq/ouz/./dpm/njb/tno/cxu/xzj/mlb/jdw/.././yao/../xxi/../vhq/hdv/bfk/./ldq/./.././fss/../dfe/../fvt/utt/tok/../../../../bhh/rgh/ymq/./../gbd/ntn/hhv/twl/./bov/.././zxt/otc/oxk/eds/day/././uub/vki/vjx/sua/yhm/pjn/ccv/sfr/./sim/./cgv/ngt/./skc/yjr/ypx/./efg/././wku/syt/./aop/lpl/.././xwi/yip/pwm/ibc/qmz/hsx/kcj/.././ftn/ccl/../jrz/cxr/syp/./mzo/./../../xzo/././sjs/./vlo/./iyr/../cor/qsr/./iiy/./qha/fic/ppt/tju/tao/spl/hct/nqp/eev/wik/rnr/./aon/jlc/fbx/ahi/xmm/eiz/ecp/.././jkf/upk/gza/oqv/./.././qim/avp/../../une/../../xar/yit/qyp/rul/./seb/vwp/ppa/plr/../bnn/hjs/uws/yxt/ktu/vtj/./../../bbz/nmw/./dtn/nls/./././jlq/sfv/anc/./qrn/whc/./gtm/xol/zdc/zkz/../.././oux/../lwq/ntx/../rgc/pcp/eif/xfd/ttn/edz/yac/acg/ube/abn/../././hup/ttq/../ddv/kpn/ccf/hkt/pdp/fgi/wuj/pge/fqq/xzy/../.././idn/./ffe/././xne/../../tfi/dko/rgo/vlc/ntp/../uwj/uym/shv/fht/xiw/dim/./wkl/ghw/xhr/lfw/zny/vyi/./fre/jax/net/./tqr/../obm/././trp/./wnu/cac/sud/../tvi/fly/ksq/fkd/jmw/wpo/wzm/././../goy/ahu/../../ves/qpi/zng/./././lxx/vus/ftg/../idk/jja/./././rgq/pmc/ief/ppq/ecd/ulh/gig/ifu/qiz/./../kys/../hyn/./jsf/./yyk/../aig/kvj/gwg/mjs/ydd/jzf/../qqv/slh/lat/sem/nlr/xan/./jtb/cex/../xip/tdj/cxc/./jyz/fqy/../zhh/qza/rzm/./hnh/gqh/../../dla/../../rmo/.././../efb/gpu/nqi/nqr/dhz/mkr/wnq/./././xvg/./tcy/./xto/qsa/uxl/urz/zgc/.././hrt/vnj/ixs/../nus/kyn/jbz/wke/yuh/../wix/smf/../spr/./hts/pgb/lzs/ffk/jub/xwv/boe/ioc/jtg/oij/./frz/./../dzd/hzf/dwi/./fhi/pbw/qnd/kty/vyl/oqm/slp/ihw/./jsz/./smu/./fuv/htx/qsh/dxc/vvh/ksj/../ube/../opj/uyz/qxm/jpt/hbs/eru/./../../../gnd/ofm/./efp/hyf/lpi/../osn/./vcw/ufh/../zfg/./btn/jqd/../dlv/ytf/fsh/owy/.././wne/xhz/../ijq/./../sgf/cny/../mwl/nrw/udb/./otm/ltw/qfe/./lku/../crm/oiz/hps/yds/oer/../../reo/myb/nst/nqb/txz/uej/nub/../wtr/./rnr/fxr/.././ghx/jdj/otf/./gcg/rhz/ksa/mil/vql/././vlb/qft/xlr/htp/dmu/wje/ggs/tos/czx/kro/./mzq/nrr/bvj/bpr/fce/swv/cox/mbx/roe/wub/baw/lzc/qvv/./.././ect/xvx/kcn/gym/xwi/rpc/hvu/gcs/zlv/avy/../ucz/jlh/tkm/./szf/tpi/zyv/ona/xep/neu/uqf/../yvt/../.././../tse/zvh/../bsl/.././wrj/../../qvw/cpp/./fek/cry/lsm/../ubt/rza/rpt/rgw/ozx/xta/rvi/etw/./kxt/qeq/cik/aqq/bps/oky/hao/gha/../pqi/qbt/ayq/./doh/zkp/./kcp/ala/als/./hyh/wxo/flv/./././sty/./../deg/../fue/./../guk/../uxz/....";
    string c = solve(A);
    cout << endl
         << c;
    return 0;
}
