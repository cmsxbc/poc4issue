 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree7(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.0675000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)0.79050000000000009);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)1.3365000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 24, (DAAL_DATA_TYPE)0.73550000000000015);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 17, (DAAL_DATA_TYPE)0.61350000000000005);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0079328295607597396);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 25, (DAAL_DATA_TYPE)0.94150000000000011);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)0.0015180744821342027);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.01729478742927313);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0081119230963656152);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0088608543218021679);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[2], 1, 27, (DAAL_DATA_TYPE)0.90450000000000019);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 26, (DAAL_DATA_TYPE)0.85650000000000015);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 25, (DAAL_DATA_TYPE)0.89550000000000007);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 25, (DAAL_DATA_TYPE)0.52350000000000019);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 0, (DAAL_DATA_TYPE)0.90350000000000008);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)-0.015133176418021322);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0054971858094900079);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0093629789733069707);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[14], 1, 27, (DAAL_DATA_TYPE)0.78650000000000009);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)0.00036156429694249082);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.016454725555683437);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[13], 1, 25, (DAAL_DATA_TYPE)0.68650000000000022);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 13, (DAAL_DATA_TYPE)0.9405);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.00038053896157972278);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.012855162856078918);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.013550792875346438);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[12], 1, 25, (DAAL_DATA_TYPE)0.64950000000000008);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 9, (DAAL_DATA_TYPE)1.6725000000000001);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0087704800891087349);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.008886995216210683);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[28], 1, 24, (DAAL_DATA_TYPE)1.0265000000000002);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 24, (DAAL_DATA_TYPE)0.75450000000000006);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0073919512769755197);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 0, (DAAL_DATA_TYPE)1.6975000000000002);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 5, (DAAL_DATA_TYPE)1.4685000000000004);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 2, (DAAL_DATA_TYPE)-1.3964999999999999);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.01010088250041008);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0066719336978470281);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)0.01323572405747005);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.017770379001186009);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[32], 1, 5, (DAAL_DATA_TYPE)1.1045000000000003);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0034548146302228449);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[42], 1, 24, (DAAL_DATA_TYPE)1.7695000000000001);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.012720132908672866);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)-0.0014585473551982789);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[1], 1, 25, (DAAL_DATA_TYPE)1.5585000000000002);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 24, (DAAL_DATA_TYPE)1.0435000000000001);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 27, (DAAL_DATA_TYPE)0.9405);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 5, (DAAL_DATA_TYPE)0.88650000000000018);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.0098027552498711479);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.0028096679709628675);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.013382128155925899);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[48], 1, 7, (DAAL_DATA_TYPE)1.3325000000000002);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 9, (DAAL_DATA_TYPE)0.88050000000000017);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0070573524060383655);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0016918324716559284);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.012920646904370723);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[47], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.010757859620485415);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.021987582869448907);

}
