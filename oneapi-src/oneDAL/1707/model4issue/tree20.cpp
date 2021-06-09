 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree20(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.2115000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)0.81150000000000022);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 27, (DAAL_DATA_TYPE)0.73350000000000015);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 5, (DAAL_DATA_TYPE)0.70050000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.72850000000000004);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0052897706192422227);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)0.003063264836011262);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.0032587452048666019);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[3], 1, 23, (DAAL_DATA_TYPE)1.2485000000000002);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 25, (DAAL_DATA_TYPE)0.88950000000000007);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0049864918730842568);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.016946930729824564);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0083652150389310481);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[2], 1, 27, (DAAL_DATA_TYPE)0.85950000000000004);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 25, (DAAL_DATA_TYPE)1.1785000000000003);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 21, (DAAL_DATA_TYPE)0.40200000000000008);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)-0.0071717719773988471);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[16], 1, 26, (DAAL_DATA_TYPE)0.85650000000000015);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 25, (DAAL_DATA_TYPE)0.93050000000000022);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)0.0049482277765565998);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.0049780397527459741);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)0.61250000000000016);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0016907192186101693);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.0091420899384138232);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.01212542069994885);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[14], 1, 22, (DAAL_DATA_TYPE)1.0375000000000003);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 24, (DAAL_DATA_TYPE)1.1585000000000003);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 26, (DAAL_DATA_TYPE)0.98550000000000015);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)-0.0098563499471475916);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.0032742192702633999);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[27], 1, 27, (DAAL_DATA_TYPE)1.4855000000000003);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)0.0034905652669460878);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.014833907995905197);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[26], 1, 1, (DAAL_DATA_TYPE)1.8530000000000004);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 27, (DAAL_DATA_TYPE)1.1385000000000003);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.0061204440023872883);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.00070770849215697103);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.013810623369433665);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[1], 1, 27, (DAAL_DATA_TYPE)1.0515000000000001);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 5, (DAAL_DATA_TYPE)1.4930000000000001);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 15, (DAAL_DATA_TYPE)-1.5714999999999997);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.01334186927838759);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 24, (DAAL_DATA_TYPE)1.2485000000000002);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 21, (DAAL_DATA_TYPE)0.57350000000000001);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.0063240263528294045);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 21, (DAAL_DATA_TYPE)1.0925000000000002);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 22, (DAAL_DATA_TYPE)1.0885000000000002);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0097712397752773208);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.0040016737885964224);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[46], 1, 26, (DAAL_DATA_TYPE)1.0165000000000002);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.012050586803392931);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0066002244173094292);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0042494446255158689);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.012845928966999055);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[39], 1, 24, (DAAL_DATA_TYPE)1.3545000000000003);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0097504011372725186);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[57], 0, 17, (DAAL_DATA_TYPE)1.6985000000000003);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)-0.0020738213555887342);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)0.013120916904881597);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.011453553760538297);

}
